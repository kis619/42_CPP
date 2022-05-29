/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:25:40 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 17:11:29 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Punk!" << std::endl;
		return (EXIT_FAILURE);
	}
	
	Harl harlito = Harl();
	harlito.complain(argv[1]);
	return (EXIT_SUCCESS);
}