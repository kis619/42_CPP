/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:05:34 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 22:52:08 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap constructor" << std::endl;
	this->_name = "You";
	this->_hp = 100;
	this->_energy = 100;
	this->_attackDmg = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Frag Trap copy constructor" <<std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_attackDmg = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name <<": FragTrap destructor" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_attackDmg = other._attackDmg;
	return(*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->canPerformAction())
	{
		this->_energy -= 1;
		std::cout << "FT " << this->_name << " attacks " << target << " roughly, causing " << this->_attackDmg << " points of damage!" << std::endl;
		return ;
	}
	std::cout << this->_name << " is too f***ing tired to attack..." << std::endl << "or maybe dead..." << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << this->_name << " is high-fiving you" << std::endl;
}