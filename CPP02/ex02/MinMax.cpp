/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MinMax.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:37:04 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 15:15:13 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
		
}

const Fixed& Fixed::min(const Fixed&a, const Fixed &b)
{
	if (a < b)
		return (a);
	return(b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return(a);
	return(b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return(a);
	return(b);
} 