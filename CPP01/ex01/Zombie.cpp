/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:40:24 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/28 19:06:22 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " ran out of brains." << std::endl;
}

void Zombie::nameSetter(std::string name)
{
	if (!name.empty())
		this->_name = name;
	else
		this->_name = "A zombie without a name";
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

