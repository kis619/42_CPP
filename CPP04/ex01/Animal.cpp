/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:10:10 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 00:40:08 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("your mom")
{
	std::cout << "Base class constructor" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Base class destructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Base class copy constructor" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Base class copy operator" << std::endl;
	this->_type = other._type;
	return(*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Idk what to say.." << std::endl;
}

std::string Animal::getType(void) const
{
	return(this->_type);
}