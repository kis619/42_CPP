/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 01:01:18 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy operator" << std::endl;
	this->_type = other._type;
	return(*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow mother-catter" << std::endl;
}

