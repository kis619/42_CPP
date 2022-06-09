/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:53:44 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:23 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robo Request", SIGN_PRESIDENT, EXEC_PRESIDENT), _target(target)
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
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << this->getNameForm() << " was signed by " << barb.getName() << std::endl;
}