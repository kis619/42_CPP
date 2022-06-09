/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:53:44 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:42:14 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", SIGN_PRESIDENT, EXEC_PRESIDENT), _target(target)
{
	std::cout << "Presidential constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	std::cout << "Presidential copy constructor" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential constructor" << std::endl;	
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->setStatus(other.getStatus());
	return (*this);
}

const std::string PresidentialPardonForm::getName(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::executeSafe(const Bureaucrat & barb) const
{
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << this->getNameForm() << " was signed by " << barb.getName() << std::endl;
}