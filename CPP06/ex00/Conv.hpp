/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:52:39 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/12 21:10:55 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <limits>
# include <math.h>
# include <cmath>
# include <iomanip>
class Convertor
{
	private:
		
		std::string _input;
		int		i;
		double	d;
		float	f;
		char	c;
		
		std::string _displayInteger;
		std::string _displayDouble;
		std::string _displayFloat;
		std::string _displayChar;
		////Display
		void display(void);
		
		////Conversions
		void makeConversions(void);
		void fromInt(void);
		
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
