/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArithmeticOperatorsOverload.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:28:29 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/01 15:36:41 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+(Fixed const &other) const
{
	return Fixed(this->getRawBits() + other.getRawBits());
}