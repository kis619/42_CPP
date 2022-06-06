/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:10:10 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 22:14:20 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("your mom")
{
	std::cout << "Base class constructor" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Base class destructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "Base class copy constructor" << std::endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Base class copy operator" << std::endl;
	this->_type = other._type;
	return(*this);
}

void AAnimal::makeSound(void) const
{
	std::cout << "Idk what to say.." << std::endl;
}

std::string AAnimal::getType(void) const
{
	return(this->_type);
}