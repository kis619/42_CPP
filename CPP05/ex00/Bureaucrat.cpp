/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:15 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/07 11:48:40 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name)
{
	std::cout << "Bureaucrat: name constructor" << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
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
	this->_name = other._name;
	this->_grade = other._grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}