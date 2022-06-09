/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:15 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 12:32:09 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name)
{
	std::cout << "Bureaucrat: name constructor" << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << "Bureaucrat: copy constructor" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destructor" << std::endl;

}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat: copy operator" << std::endl;
	this->_grade = other._grade;
	return (*this);
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();

	if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	setGrade(this->_grade - 1);
}

void Bureaucrat::decrementGrade(void)
{
	setGrade(this->_grade + 1);
}


const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &Barbara)
{
	os << Barbara.getName() << ", bureaucrat grade " << Barbara.getGrade();
	return (os);
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << COLOR_GREEN <<this->getName() << " signed " << f.getNameForm() << COLOR_DEFAULT << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << COLOR_RED << this->getName() << " could not sign " << f.getNameForm() << ". Reason: " << error.what() << COLOR_DEFAULT << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &f)
{
	try
	{
		f.execute(*this);
		std::cout << COLOR_GREEN <<this->getName() << " executed " << f.getNameForm() << COLOR_DEFAULT << std::endl;
	}
	catch(std::exception &error)
	{
		std::cout << COLOR_RED << this->getName() << " could not execute " << f.getNameForm() << ". Reason: " << error.what() << COLOR_DEFAULT << std::endl;
	}
}

