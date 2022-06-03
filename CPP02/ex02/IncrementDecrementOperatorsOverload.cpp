/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncrementDecrementOperatorsOverload.cpp            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:22:54 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 14:22:22 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator++(void)
{
	this->_val += 1;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed toReturn(*this);
	this->_val += 1;
	return toReturn;
}

Fixed &Fixed::operator--(void)
{
	this->_val -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed toReturn(*this);
	this->_val -= 1;
	return(toReturn);
}