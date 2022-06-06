/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:10:10 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 00:58:46 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("your mom")
{
	std::cout << "Base class constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Base class destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Base class copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Base class copy operator" << std::endl;
	this->_type = other._type;
	return(*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Idk what to say.." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(this->_type);
}