/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 03:25:40 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 16:17:49 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harlito;
	
	std::cout << "LEVEL 0" << std::endl;
	harlito.complain("DEBUG");
	std::cout << "LEVEL 1" << std::endl;
	harlito.complain("INFO");
	std::cout << "LEVEL 2" << std::endl;
	harlito.complain("WARNING");
	std::cout << "LEVEL 3" << std::endl;
	harlito.complain("ERROR");
	std::cout << "ERROR" << std::endl;
	harlito.complain("TOASTER");
	
}