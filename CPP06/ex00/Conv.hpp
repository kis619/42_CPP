/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 16:52:39 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/12 20:14:19 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <limits>
# include <math.h>
# include <ctype.h>

class Convertor
{
	private:
		
		std::string _input;
		
		int determineType(void);
		bool isFloatPseudoLiterals(void);
		bool isDoublePseudoLiterals(void);
		void checkIsNum(void);
		bool isInteger(void);
		bool isNumber(void);
		bool isFloat(void);
		bool isDouble(void);
		
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
