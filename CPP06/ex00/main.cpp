/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:56:02 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 00:56:20 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conv.hpp"

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
	me.display();
	// float f = 200.1f;
	// int i = static_cast<int>(f);
	// std::cout << i <<std::endl;


	
	return (0);
}