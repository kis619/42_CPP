/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:07:09 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/12 21:15:06 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

//Constructor
Convertor::Convertor(void) : _type(isILLEGAL)
{
}



void Convertor::convert(std::string input)
{
	this->_input = input;
	this->_type = determineType();
	makeConversions();
	
}

void Convertor::display(void)
{
	if (this->_type == isILLEGAL)
	{
		std::cout << "Integer: "	<< this->_displayInteger << std::endl;
		std::cout << "Double: "		<< this->_displayDouble << std::endl;
		std::cout << "Float: "		<< this->_displayFloat <<std::endl;
		std::cout << "Char: "		<< this->_displayChar << std::endl;
	}
	
	if (this->c < 32 || this->c >= 127)
		this->_displayChar = "not displayable";
	std::cout << "Integer: " << this->_displayInteger << std::endl;
	std::cout << "Double: " << this->_displayDouble << (static_cast<bool>(std::fmod(this->d, 1)) ? "" : ".0") << std::endl;
	std::cout << "Float: " << this->_displayFloat << (static_cast<bool>(std::fmod(this->f, 1)) ? "f" : ".0f") <<std::endl;
	std::cout << "Char: " << this->_displayChar << std::endl;
}
void Convertor::fromInt(void)
{
	this->i = stoi(this->_input);
	this->d = static_cast<double>(this->i);
	this->f = static_cast<float>(this->i);
	this->c = static_cast<char>(this->i);

	std::cout << "Integer: " << this->i << std::endl;
	std::cout << "Double: " << this->d << (static_cast<bool>(std::fmod(this->d, 1)) ? "" : ".0") << std::endl;
	std::cout << "Float: " << this->f << (static_cast<bool>(std::fmod(this->f, 1)) ? "f" : ".0f") <<std::endl;
	std::cout << "Char: " << this->c << std::endl;
}

void Convertor::makeConversions(void)
{
	switch (this->_type)
	{
	case 0:
		fromInt();
		break ;
	case 1:
		std::cout << "isCHAR" << std::endl;
		break ;
	case 2:
		std::cout << "isFLOAT" << std::endl;
		break ;
	case 3:
		std::cout << "isDOUBLE" << std::endl;
		break ;
	case 4:
		std::cout << "isSPECIAL_F" << std::endl;
		break ;
	case 5:
		std::cout << "isSPECIAL_D" << std::endl;
		break ;
	default:
		std::cout << "isILLEGAL" << std::endl;
		break ;
	}
}