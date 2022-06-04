/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 10:16:50 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/04 16:08:30 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap constructor" << std::endl;
	this->_name = "You";
	this->FragTrap::setHP();
	this->ScavTrap::setEnergy();
	this->FragTrap::setDmg();
	this->ClapTrap::_name = this->_name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap Name constructor" << std::endl;
	this->_name = name;
	this->FragTrap::setHP();
	this->ScavTrap::setEnergy();
	this->FragTrap::setDmg();
	this->ClapTrap::_name = this->_name + "_clap_name";
	// std::cout << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->_name << ": DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy = other._energy;
	this->_attackDmg = other._attackDmg;
	this->ClapTrap::_name = other.ClapTrap::_name;
	return (*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "My whole name is " << this->ClapTrap::_name<< std::endl;
}