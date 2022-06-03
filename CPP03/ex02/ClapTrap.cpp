/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:07:09 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 22:52:23 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): 
_name("You"),
_hp(10),
_energy(10),
_attackDmg(0)
{
	std::cout << "Clap Trap constructor" <<std::endl;
}

ClapTrap::ClapTrap(std::string name): 
_name(name),
_hp(10),
_energy(10),
_attackDmg(0)
{
	std::cout << "Clap Trap name constructor" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "Clap Trap copy constructor" <<std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_attackDmg = other._attackDmg;
	this->_energy = other._energy;
	this->_hp = other._hp;

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name <<": Clap Trap destructor" <<std::endl;
}

void ClapTrap::display(void)
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "HP: " << this->_hp << std::endl;
	std::cout << "Energy: " << this->_energy << std::endl;
	std::cout << "Attack Damage: " << this->_attackDmg << std::endl;
}

bool ClapTrap::canPerformAction(void)
{
	return((this->_hp > 0) && (this->_energy > 0));
}

void ClapTrap::attack(const std::string &target)
{
	if (this->canPerformAction())
	{
		this->_energy -= 1;
		std::cout << "CT " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " points of damage!" << std::endl;
		return ;
	}
	std::cout << this->_name << " is too tired to attack..." << std::endl << "Possibly dead..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int hpLost = amount;
	
	if (amount == 0)
	{
		std::cout << "What kind of an attack is this? Weakling." << std::endl;
		return ;
	}
	if (this->_hp > 0)
	{
		if (amount > this->_hp)
			hpLost = this->_hp;
		this->_hp -= amount;
		std::cout << this->_name << " got hit in the .. heart .. and lost " << hpLost << " HP." << std::endl;
		return ;
	}
	std::cout << "Stop it! " << this->_name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount == 0)
	{
		std::cout << "Well that's a bit awkward." << std::endl;
		return ;
	}
	
	if (this->canPerformAction())
	{
		this->_energy -= 1;
		this->_hp += amount;
		std::cout << "CT " << this->_name << " healed!" << std::endl;
		return ;
	}
	std::cout << this->_name << " is too tired to heal..." << std::endl << "Possibly dead..." << std::endl;
}