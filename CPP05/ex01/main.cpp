/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:48:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/08 22:47:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
static void testCheckPassGradeHappy(void)
{
	Form formular("SOT_56", 6, 7);
	std::cout << "Name: " << formular.getName() << std::endl;
	std::cout << "Name: " << formular.getPassGrade() << std::endl;
}

static void testCheckPassGradeHigh(void)
{
	Form formular("SOT_56", -1, 7);
	std::cout << "Name: " << formular.getName() << std::endl;
}

static void testCheckExecGradeLow(void)
{
	Form formular("SOT_56", 6, 1234);
	std::cout << "Name: " << formular.getName() << std::endl;
}

static void testCheckExecGradeHappy(void)
{
	Form formular("SOT_56", 6, 7);
	std::cout << "Name: " << formular.getName() << std::endl;
	std::cout << "Name: " << formular.getExecGrade() << std::endl;
}

static void testCheckExecGradeHigh(void)
{
	Form formular("SOT_56", 55, -7);
	std::cout << "Name: " << formular.getName() << std::endl;
}

static void testCheckPassGradeLow(void)
{
	Form formular("SOT_56", 151, 7);
	std::cout << "Name: " << formular.getName() << std::endl;
}

static void testBeSignedHappy(void)
{
	Form formular("SOT_56", 65, 7);
	Bureaucrat james("James", 12);
	formular.beSigned(james);
}

static void testBeSignedLow(void)
{
	Form formular("SOT_56", 65, 7);
	Bureaucrat james("James", 66);
	formular.beSigned(james);
}

static void testSignFormHappy(void)
{
	Form formular("SOT_56", 65, 7);
	Bureaucrat james("James", 65);
	james.signForm(formular);
}

static void testSignFormLow(void)
{
	Form formular("SOT_56", 65, 7);
	Bureaucrat james("James", 66);
	james.signForm(formular);
}

static void tryCatch(void (*f)(void))
{
	try
	{
		f();
	}
	catch(std::exception & error)
	{
		std::cout << "Exception caught: " << error.what() << std::endl;
	}
}


int main(void)
{
	std::string sep = "___________________________";

	std::cout << sep << std::endl;
	tryCatch(&testCheckPassGradeHappy);
	std::cout << sep << std::endl;
	tryCatch(&testCheckPassGradeHigh);
	std::cout << sep << std::endl;
	tryCatch(&testCheckPassGradeLow);
	std::cout << sep << std::endl;
	tryCatch(&testCheckExecGradeHappy);
	std::cout << sep << std::endl;
	tryCatch(&testCheckExecGradeHigh);
	std::cout << sep << std::endl;
	tryCatch(&testCheckExecGradeLow);
	std::cout << sep << std::endl;
	tryCatch(&testBeSignedHappy);
	std::cout << sep << std::endl;
	tryCatch(&testBeSignedLow);
	std::cout << sep << std::endl;
	tryCatch(&testSignFormHappy);
	std::cout << sep << std::endl;
	tryCatch(&testSignFormLow);

	std::cout << sep << std::endl;
	Form formular("F3_XX", 5, 11);
	std::cout << formular << std::endl;
	return (0);
}