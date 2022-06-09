/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:48:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 12:56:38 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "colours_grades.hpp"


static void testRoboExecuteHappy(void)
{
	Bureaucrat barbara("Barbie", 1);
	RobotomyRequestForm request("Jimmy");
	barbara.signForm(request);
	request.execute(barbara);
}

static void testPresidentExecuteHappy(void)
{
	Bureaucrat barbara("Barbie", 1);
	PresidentialPardonForm pardon("Harriet");
	PresidentialPardonForm pardon2(pardon);
	barbara.signForm(pardon2);
	pardon2.execute(barbara);
}

static void testPresidentExecuteLow(void)
{
	Bureaucrat barbara("Barbie", 22);
	PresidentialPardonForm pardon("Harriet");
	barbara.signForm(pardon);
	pardon.execute(barbara);
}

static void testPresidentExecuteHigh(void)
{
	Bureaucrat barbara("Barbie", -1);
	PresidentialPardonForm pardon("Harriet");
	barbara.signForm(pardon);
	pardon.execute(barbara);
}

static void testPresidentExecuteNotSigned(void)
{
	Bureaucrat barbara("Barbie", 1);
	PresidentialPardonForm pardon("Harriet");
	pardon.execute(barbara);
}

static void testShrubExecuteHappy(void)
{
	Bureaucrat barbara("Barbie", 1);
	SchrubberyCreationForm formular("B7Ap");
	barbara.signForm(formular);
	formular.execute(barbara);
}

static void testShrubExecuteLow(void)
{
	Bureaucrat barbara("Barbie", 145);
	SchrubberyCreationForm formular("B7Ap");
	barbara.signForm(formular);
	formular.execute(barbara);
}

static void testShrubExecuteNotSigned(void)
{
	Bureaucrat barbara("Barbie", 145);
	SchrubberyCreationForm formular("B7Ap");
	formular.execute(barbara);
}

static void testExecuteFormHappy(void)
{
	Bureaucrat barbara("Barbie", 146);
	SchrubberyCreationForm formular("B7Ap");
	barbara.signForm(formular);
	barbara.executeForm(formular);
}


static void tryCatch(void (*f)(void))
{
	try
	{
		f();
	}
	catch(std::exception & error)
	{
		std::cout << COLOR_RED <<"Exception caught: " << error.what() << COLOR_DEFAULT << std::endl;
	}
}


int main(void)
{
	std::string sep = "___________________________";

	// tryCatch(testShrubExecuteLow);
	// std::cout << sep << std::endl;
	// tryCatch(testShrubExecuteNotSigned);
	// std::cout << sep << std::endl;
	// tryCatch(testShrubExecuteHappy);
	// std::cout << sep << std::endl;
	// tryCatch(testPresidentExecuteHappy);
	// std::cout << sep << std::endl;
	// tryCatch(testPresidentExecuteNotSigned);
	// std::cout << sep << std::endl;
	// tryCatch(testPresidentExecuteLow);
	// std::cout << sep << std::endl;
	// tryCatch(testPresidentExecuteHigh);
	std::cout << sep << std::endl;
	tryCatch(testRoboExecuteHappy);
	std::cout << sep << std::endl;
	testExecuteFormHappy();
	
	return (0);
}