/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:25:36 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/08 22:46:50 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

////Constructors <--> Destructors
Form::Form(std::string name, int passGrade, int execGrade):
_name(name), 
_signed(false),
_passGrade(passGrade),
_execGrade(execGrade)
{
	std::cout << "Form Constructor" << std::endl;
	checkPassGrade(passGrade);
	checkExecGrade(execGrade);
}

Form::Form(const Form &copy):
_name(copy._name), 
_passGrade(copy._passGrade),
_execGrade(copy._execGrade)
{
	std::cout << "Form Copy Constructor" << std::endl;
	*this = copy;
}

Form::~Form(void)
{
	std::cout << "Form Destructor" << std::endl;
}

Form & Form::operator=(const Form &other)
{
	std::cout << "Form Copy operator" << std::endl;
	this->_signed = other._signed;
	return (*this);	
}

////Getters
const std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getStatus(void) const
{
	return (this->_signed);
}

const int Form::getPassGrade(void) const
{
	return(this->_passGrade);
}

const int Form::getExecGrade(void) const
{
	return(this->_execGrade);
}

////Checkers

void Form::checkPassGrade(int grade)
{
	if (grade > MIN_PASS_GRADE)
	{
		this->~Form();
		throw Form::GradeTooLowException();
	}
		
	if (grade < MAX_PASS_GRADE)
	{
		this->~Form();
		throw Form::GradeTooHighException();
	}
}

void Form::checkExecGrade(int grade)
{
	if (grade > MIN_EXEC_GRADE)
	{
		this->~Form();
		throw Form::GradeTooLowException();
	}
		
	if (grade < MAX_EXEC_GRADE)
	{
		this->~Form();
		throw Form::GradeTooHighException();
	}
}

////Miscellaneous
void Form::beSigned(Bureaucrat &debora)
{
	if (debora.getGrade() <= this->getPassGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

////Exceptions
const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high to perform action");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low to perform action");
}

////Output stream operator overload

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	std::string status;
	if (f.getStatus() == true)
		status = "is signed. ";
	else
		status = "is not signed. ";
		
	o << f.getName() << " " << status << "\nThe grade to sign is: " << f.getPassGrade() << "\nThe execution grade is: " << f.getExecGrade();
	return (o);
}