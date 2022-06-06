/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 22:00:44 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy operator" << std::endl;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
	return(*this);
}

Dog::~Dog(void) 
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark mother-barker" << std::endl;
}

std::string Dog::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void Dog::setIdea(const std::string &idea, int idx)
{
	this->_brain->setIdea(idea, idx);
}