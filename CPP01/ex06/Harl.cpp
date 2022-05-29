/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:15:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 17:10:28 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int num = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			num = i;
			break ;
		}
	}
	
	_filter(num);
}

void Harl::_filter(int num)
{
	switch (num)
	{
	case 0:
		Harl::_debug();
		std::cout << std::endl;
		Harl::_info();
		std::cout << std::endl;
		Harl::_warning();
		std::cout << std::endl;
		Harl::_error();
		std::cout << std::endl;
	break;
	
	case 1:
		Harl::_info();
		std::cout << std::endl;
		Harl::_warning();
		std::cout << std::endl;
		Harl::_error();
		std::cout << std::endl;
	break;
	
	case 2:
		Harl::_warning();
		std::cout << std::endl;
		Harl::_error();
		std::cout << std::endl;
	break;
	
	case 3:
		Harl::_error();
		std::cout << std::endl;
	break;
	default:
		std::cout << "Mansplaining" << std::endl;
	break;
	}
}

