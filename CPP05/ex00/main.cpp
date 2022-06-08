/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:48:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/08 15:07:42 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void testSetGradeHappy(void)
{
	Bureaucrat boris("Boris", 43);
	std::cout << "Name: " << boris.getName() << std::endl;
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(7);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(69);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
}

static void testSetGradeHigh(void)
{
	Bureaucrat boris("Boris", 43);
	std::cout << "Name: " << boris.getName() << std::endl;
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(7);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(-1);
}

static void testSetGradeLow(void)
{
	Bureaucrat boris("Boris", 43);
	std::cout << "Name: " << boris.getName() << std::endl;
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(7);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(1341234);
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
	tryCatch(testSetGradeHigh);
	std::cout << sep << std::endl;
	tryCatch(testSetGradeLow);
	std::cout << sep << std::endl;
	tryCatch(testSetGradeHappy);
	return (0);
}