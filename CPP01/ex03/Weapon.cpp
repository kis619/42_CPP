/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:04:28 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 00:17:12 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon(void)
{
}

std::string const &Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	if (!type.empty())
		this->_type = type;
	else
		this->_type = "Imaginaty weapon";
}