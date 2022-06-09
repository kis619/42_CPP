/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:53:44 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 12:10:15 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robo Request", SIGN_ROBO, EXEC_ROBO), _target(target)
{
	std::cout << "Robo constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
	std::cout << "Robo copy constructor" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robo constructor" << std::endl;	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->setStatus(other.getStatus());
	return (*this);
}

const std::string RobotomyRequestForm::getName(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::executeSafe(const Bureaucrat & barb) const
{
	srand(time(NULL));
	bool success = rand() % 2;
	std::string message;
	if (success)
		message = this->_target + " has been robotomised.";
	else
		message = "Robotomy failed.";
	
	std::cout << COLOR_BLUE <<"Brrrrppppppppp..." << message << COLOR_DEFAULT << std::endl;
}