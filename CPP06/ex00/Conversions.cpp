/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversions.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 01:10:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 01:12:09 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp" 

void Convertor::fromInt(void)
{
	this->_typeStr = INTEGER;
	this->_i = stoi(this->_input);
	this->_d = static_cast<double>(this->_i);
	this->_f = static_cast<float>(this->_i);
	this->_c = static_cast<char>(this->_i);
}

void Convertor::fromFloat(void)
{
	this->_typeStr = FLOAT;
	this->_f = stof(this->_input);
	this->_d = static_cast<double>(this->_f);
	this->_i = static_cast<int>(this->_f);
	this->_c = static_cast<char>(this->_f);
}

void Convertor::fromDouble(void)
{
	this->_typeStr = DOUBLE;
	this->_d = stod(this->_input);
	this->_f = static_cast<float>(this->_d);
	this->_i = static_cast<int>(this->_d);
	this->_c = static_cast<char>(this->_d);
}

void Convertor::fromChar(void)
{
	this->_typeStr = CHARACTER;
	this->_c = this->_input[0];
	this->_f = static_cast<float>(this->_c);
	this->_i = static_cast<int>(this->_c);
	this->_d = static_cast<double>(this->_c);
}


void Convertor::makeConversions(void)
{
	switch (this->_type)
	{
	case isINT:
		fromInt();
		break ;
	case isCHAR:
		fromChar();
		break ;
	case isFLOAT:
		fromFloat();
		break ;
	case isDOUBLE:
		fromDouble();
		break ;
	case isSPECIAL_F:
		fromFloat();
		break ;
	case isSPECIAL_D:
		fromDouble();
		break ;
	default:
		this->_typeStr = ILLEGAL;
		break ;
	}
}