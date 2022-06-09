/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:25:36 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 12:30:40 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

////Constructors <--> Destructors
AForm::AForm(std::string name, int passGrade, int execGrade):
_name(name), 
_signed(false),
_passGrade(passGrade),
_execGrade(execGrade)
{
	std::cout << "Form Constructor" << std::endl;
	checkPassGrade(passGrade);
	checkExecGrade(execGrade);
}

AForm::AForm(const AForm &copy):
_name(copy._name), 
_passGrade(copy._passGrade),
_execGrade(copy._execGrade)
{
	std::cout << "Form Copy Constructor" << std::endl;
	*this = copy;
}

AForm::~AForm(void)
{
	std::cout << "Form Destructor" << std::endl;
}

AForm & AForm::operator=(const AForm &other)
{
	std::cout << "Form Copy operator" << std::endl;
	this->_signed = other._signed;
	return (*this);	
}

////Getters
const std::string AForm::getNameForm(void) const
{
	return (this->_name);
}

bool AForm::getStatus(void) const
{
	return (this->_signed);
}

int AForm::getPassGrade(void) const
{
	return(this->_passGrade);
}

int AForm::getExecGrade(void) const
{
	return(this->_execGrade);
}

////Setters
void AForm::setStatus(bool status)
{
	this->_signed = status;
}

////Checkers

void AForm::checkPassGrade(int grade)
{
	if (grade > MIN_PASS_GRADE)
	{
		this->~AForm();
		throw AForm::GradeTooLowException();
	}
		
	if (grade < MAX_PASS_GRADE)
	{
		this->~AForm();
		throw AForm::GradeTooHighException();
	}
}

void AForm::checkExecGrade(int grade)
{
	if (grade > MIN_EXEC_GRADE)
	{
		this->~AForm();
		throw AForm::GradeTooLowException();
	}
		
	if (grade < MAX_EXEC_GRADE)
	{
		this->~AForm();
		throw AForm::GradeTooHighException();
	}
}


////Miscellaneous
void AForm::beSigned(Bureaucrat &debora)
{
	if (debora.getGrade() <= this->getPassGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(const Bureaucrat &b) const
{
	if (!this->getStatus())
		throw FormNotSignedException();
	if (b.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	executeSafe(b);
}

////Exceptions
const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high to perform action");
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low to perform action");
}

const char*AForm::FormNotSignedException::what(void) const throw()
{
	return ("The form is not signed");
}
////Output stream operator overload

std::ostream &operator<<(std::ostream &o, const AForm &f)
{
	std::string status;
	if (f.getStatus() == true)
		status = "is signed. ";
	else
		status = "is not signed. ";
		
	o << f.getNameForm() << " " << status << "\nThe grade to sign is: " << f.getPassGrade() << "\nThe execution grade is: " << f.getExecGrade();
	return (o);
}