/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:56:02 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/12 21:05:15 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conv.hpp"
// # include <cstdlib>

// int determineType(std::string input)
// {
// 	int type = -1;
	
// 	std::string pseudoFloatLiterals[3] = {"-inff", "+inff", "nanf"};
// 	std::string pseudoDoubleLiterals[3] = {"-inf", "+inf", "nan"};
// 	for (int i = 0; i < 3; i++)
// 	{
// 		if (pseudoFloatLiterals[i] == input)
// 			return (isSPECIAL_F);
// 		if (pseudoDoubleLiterals[i] == input)
// 			return (isSPECIAL_D);
// 	}
	
// 	return (type);
// }

// void exec(std::string input, int type)
// {
// 	std::cout << std::fixed << std::setprecision(2);
	
// 	////TO BE MADE A SWITCH
// 	if (type == isSPECIAL_F || type == isSPECIAL_D)
// 	{
// 		std::cout << "char: impossible" << std::endl;
// 		std::cout << "int: impossible" << std::endl;
// 		std::cout << "double: " << input << std::endl;
// 		std::cout << "float: " << input << std::endl;
// 	}

// 	else if (type == isINT)
// 	{
// 		int num = std::stoi(input);
// 		std::cout << "Type: integer" << std::endl;
// 		std::cout << "int: " << num << std::endl;
// 		std::cout << "char: " << static_cast<char>(num) << std::endl;
// 		std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
// 		std::cout << "double: " << static_cast<double>(num) << std::endl;
// 	}
// }

int main(int argc, char *argv[])
{
	if (argc != 2 || !argv)
	{
		std::cout << "The program takes EXACTLY one argument you dussel!" << std::endl;
		return(1);
	}

	Convertor me;
	me.convert(argv[1]);
	// switch (me._type)
	// {
	// case 0:
	// 	std::cout << "isINT" << std::endl;
	// 	break ;
	// case 1:
	// 	std::cout << "isCHAR" << std::endl;
	// 	break ;
	// case 2:
	// 	std::cout << "isFLOAT" << std::endl;
	// 	break ;
	// case 3:
	// 	std::cout << "isDOUBLE" << std::endl;
	// 	break ;
	// case 4:
	// 	std::cout << "isSPECIAL_F" << std::endl;
	// 	break ;
	// case 5:
	// 	std::cout << "isSPECIAL_D" << std::endl;
	// 	break ;
	// default:
	// 	std::cout << "isILLEGAL" << std::endl;
	// 	break ;
		
	// }
	// double a = 123.;
	// std::cout << me._type << std::endl;
	// std::cout << std::fixed << std::endl;
	// std::cout <<  std::numeric_limits<float>::max() << std::endl;
	// std::cout <<  std::numeric_limits<float>::min() << std::endl;
	// std::cout <<  -123.f << std::endl;
 	// float a = 12.1f;
	// std::cout <<  a << std::endl;
	return (0);
}