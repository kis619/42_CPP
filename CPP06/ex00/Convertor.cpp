/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:07:09 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/12 20:19:59 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"
#include <iostream>
#include <cmath>
# include <limits>
# include <iomanip>
# include "Conv.hpp"
//Constructor
Convertor::Convertor() : _type(isILLEGAL)
{
}

//Checks if the input is one of the float pseudo literals.
bool Convertor::isFloatPseudoLiterals()
{
	std::string pseudoFloatLiterals[5] = {"-inff", "+inff", "nanf", "inff", "NaNf"};
	for (int i = 0; i < 5; i++)
	{
		if (pseudoFloatLiterals[i] == this->_input)
			return (true);
	}
	return (false);
}

//Checks if the input is one of the double pseudo literals.
bool Convertor::isDoublePseudoLiterals()
{
	std::string pseudoDoubleLiterals[5] = {"-inf", "+inf", "nan", "inf", "NaN"};
	for (int i = 0; i < 5; i++)
	{
		if (pseudoDoubleLiterals[i] == this->_input)
			return (true);
	}
	return (false);
}

void Convertor::convert(std::string input)
{
	this->_input = input;
	this->_type = determineType();
}

////Checks if the string value can be an actual INT, DOUBLE or FLOAT
bool Convertor::isNumber(void)
{
	int len = this->_input.length();
	int deciamlPoints = 0;
	
	if (this->_input[0] != '-' && this->_input[0] != '+' && !isdigit(this->_input[0]))
		return (false);

	for (int i = 1; i < len; i++)
	{
		if (this->_input[i] == '.')
			deciamlPoints++ ;
		else if(this->_input[i] == 'f' && i + 1 == len)
			break ;
		else if ((!isdigit(this->_input[i])) || (deciamlPoints > 1))
			return (false);
	}
	return (true);	
}

////Checks if the NUMBER provided as a string is an INT
bool Convertor::isInteger(void)
{
	// if (!isNumber()) //I do not need to protect, but could be done
	// 	return (false);
	for (size_t i = 1; i < this->_input.length() ; i++)
	{
		if (!isdigit(this->_input[i]))
			return (false);
	}
	
	long int num;
	try
	{
		num = stol(this->_input);
	}
	catch(std::exception & error)
	{
		return (false);
	}
		
	if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

////Checks if the NUMBER provided as a string is a FLOAT
bool Convertor::isFloat(void)
{
	// if (!isNumber()) //I do not need to protect, but could be done
	// 	return (false);
	if (this->_input[this->_input.length() - 1] != 'f')
		return (false);
		
	float num;
	try
	{
		num = stof(this->_input);	
	}
	catch(std::exception & error)
	{
		return (false);
	}
	if (num > std::numeric_limits<float>::max() || num < -std::numeric_limits<float>::max())
		return (false);
	return (true);	
}

////Checks if the NUMBER provided as a string is a DOUBLE
bool Convertor::isDouble(void)
{
	// if (!isNumber()) //I do not need to protect, but could be done
	// 	return (false);
		
	double num;
	try
	{
		num = stof(this->_input);	//str to double
	}
	catch(std::exception & error)
	{
		return (false);
	}
	if (num > std::numeric_limits<double>::max() || num < -std::numeric_limits<double>::max())
		return (false);
	return (true);	
}

////Return the enum of the correct type
int Convertor::determineType()
{
	if (this->_input.length() == 1)
	{
		if(isdigit(this->_input[0]))
			return (isINT);
		return (isCHAR);
	}
	if (isFloatPseudoLiterals())
		return (isSPECIAL_F);
	if (isDoublePseudoLiterals())
		return (isSPECIAL_D);
	if (!isNumber())
		return (isILLEGAL);
	if (isInteger())
		return (isINT);
	if (isFloat())
		return (isFLOAT);
	if (isDouble())
		return (isDOUBLE);
		
	return (44);				
}