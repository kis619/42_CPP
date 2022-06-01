/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:47:14 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/01 15:17:16 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor
Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" <<std::endl;
}

//Constructor with integer as a parameter
Fixed::Fixed(int const num)
{
	this->_val = num << this->_frBitCount;
	std::cout << "Int constructor called" <<std::endl;
}

//Constructor with float as a parameter
Fixed::Fixed(float const num)
{
	this->_val = roundf(num * (1 << this->_frBitCount));
	std::cout << "Float constructor called" <<std::endl;
}

//Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//Destructor
Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

//Operator =
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_val = other._val;
	return(*this);
}

//Getter
int Fixed::getRawBits(void) const
{
	return this->_val;
}

//Setter
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

//Fixed to float
float Fixed::toFloat(void) const
{
	return ((float)(this->_val) / (float)(1 << this->_frBitCount));
}

//Fixed to integer
int Fixed::toInt(void) const
{
	return (this->_val >> this->_frBitCount);
}

//Operator <<
std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}