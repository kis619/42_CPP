/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:36:35 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 00:26:30 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :_weapon(NULL)
{
	setName(name);
}

HumanB::~HumanB(void)
{
}

void HumanB::setName(std::string name)
{
	if (!name.empty())
		this->_name = name;
	else
		this->_name = "Humanoid";
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << (this->_weapon)->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon" << std::endl;
}
