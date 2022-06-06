/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:48:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/07 01:05:04 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat boris("Boris", 43);
	std::cout << "Name: " << boris.getName() << std::endl;
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(7);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	boris.setGrade(-1);
	std::cout << "Grade: " << boris.getGrade() << std::endl;
	return (0);
}