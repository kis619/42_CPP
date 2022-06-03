/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:47:14 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 15:16:05 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Default constructor
Fixed::Fixed(void) : _val(0)
{
}

//Constructor with integer as a parameter
Fixed::Fixed(int const num)
{
	this->_val = num << this->_frBitCount;
}

//Constructor with float as a parameter
Fixed::Fixed(float const num)
{
	this->_val = roundf(num * (1 << this->_frBitCount));
}

//Copy Constructor
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

//Destructor
Fixed::~Fixed(void)
{
}

//Operator =
Fixed &Fixed::operator=(const Fixed &other)
{
	this->_val = other.getRawBits();
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