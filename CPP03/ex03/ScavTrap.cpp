/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:05:34 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/04 16:10:30 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap constructor" << std::endl;
	this->_name = "You";
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Scav Trap copy constructor" <<std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDmg = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << ": ScavTrap destructor" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_attackDmg = other._attackDmg;
	return(*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->canPerformAction())
	{
		this->_energy -= 1;
		std::cout << "ST " << this->_name << " attacks " << target << " gently, causing " << this->_attackDmg << " points of damage!" << std::endl;
		return ;
	}
	std::cout << this->_name << " is too tired to attack..." << std::endl << "or dead..." << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << this->_name <<" is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::setEnergy(void)
{
	this->_energy = 50;
}