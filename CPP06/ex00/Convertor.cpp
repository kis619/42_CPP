/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:07:09 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 01:51:30 by kmilchev         ###   ########.fr       */
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
	std::string impossible = "impossible";
	
	std::cout << "Type    : " << this->_typeStr << std::endl;

	////Not a valid number
	if (this->_type == isILLEGAL)
	{
		std::cout << "Integer : " << impossible << std::endl;
		std::cout << "Char    : " << impossible << std::endl;
		std::cout << "Double  : " << impossible << std::endl;
		std::cout << "FLoat   : " << impossible << std::endl;
		return ;
	}
	
	////Integer
	if (this->_f < INT32_MIN || this->_f >= INT32_MAX || this->_type == isSPECIAL_D || this->_type == isSPECIAL_F)
		std::cout << "Integer : " << impossible << std::endl;
	else
		std::cout << "Integer : " << this->_i << std::endl;
	
	////Character
	if (this->_f < 0 || this->_f >= 255 || this->_type == isSPECIAL_D || this->_type == isSPECIAL_F)
		std::cout << "Char    : " << impossible << std::endl;
	else if (this->_c < 32 || this->_c >= 127)
		std::cout << "Char    : not displayable" << std::endl;
	else
		std::cout << "Char    : '" << this->_c << "'"<< std::endl;
	
	////Double and Float
	std::cout << "Double  : " << this->_d << (static_cast<bool>(std::fmod(this->_d, 1)) ? "" : ".0") << std::endl;
	std::cout << "Float   : " << this->_f << (static_cast<bool>(std::fmod(this->_f, 1)) ? "f" : ".0f") <<std::endl;
}

