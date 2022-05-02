/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:44:40 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/01 19:43:55 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	strUpper(std:: string str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)toupper(str[i]);
		
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			strUpper(argv[i]);
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

