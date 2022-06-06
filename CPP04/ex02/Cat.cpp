/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 22:00:44 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy operator" << std::endl;
	this->_type = other._type;
	// delete this->_brain;
	this->_brain = new Brain(*other._brain); //i don't get why the asteriks
	return(*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow mother-catter" << std::endl;
}

std::string Cat::getIdea(int idx) const
{
	return (this->_brain->getIdea(idx));
}

void Cat::setIdea(const std::string &idea, int idx)
{
	this->_brain->setIdea(idea, idx);
}

