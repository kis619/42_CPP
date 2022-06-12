/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:52:39 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 01:05:38 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <limits>
# include <math.h>
# include <cmath>
# include <iomanip>
# define INTEGER "Integer"
# define FLOAT "Float"
# define DOUBLE "Double"
# define SPECIAL "Special"
# define CHARACTER "Char"
# define ILLEGAL "Illegal"

class Convertor
{
	private:
		
		std::string _input;
		std::string _typeStr;
		int		_i;
		double	_d;
		float	_f;
		char	_c;
		
		
		////Conversions
		void makeConversions(void);
		void fromInt(void);
		void fromFloat(void);
		void fromDouble(void);
		void fromChar(void);
		
		////Check data type
		int determineType(void) const;
		bool isChar(void) const;
		bool isNumber(void) const;
		bool isFloatPseudoLiterals(void) const;
		bool isDoublePseudoLiterals(void) const;
		bool isInteger(void) const;
		bool isFloat(void) const;
		bool isDouble(void) const;
		
	public:
		int _type;
		Convertor();
		void convert(std::string input);
		////Display
		void display(void);
};

enum type
{
	isINT,
	isCHAR,
	isFLOAT,
	isDOUBLE,
	isSPECIAL_F,
	isSPECIAL_D,
	isILLEGAL,
};
#endif
