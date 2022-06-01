/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ComparisonOperatorsOverload.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:02:41 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/01 15:25:35 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return(this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}
