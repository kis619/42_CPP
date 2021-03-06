/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:34:37 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 17:35:28 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	if (argc != 4)
	{ 
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buff;
	std::size_t match;
	std::ifstream inputFile(file.c_str());
	std::ofstream outputFile((file + ".replace").c_str(), std::ios::app);
	int len = s1.length();
	
	if (inputFile.is_open() && outputFile.is_open())
	{
		while(getline(inputFile, buff))
		{
			
			while((match = buff.find(s1)) != (size_t)-1)
			{
				buff.erase(match, len);
				buff.insert(match, s2);
			}
			outputFile << buff << std::endl;
		}
		inputFile.close();
		outputFile.close();
		return (0);
	}
	std::cout << "The file could not be found or opened." << std::endl;
	return (1);
}