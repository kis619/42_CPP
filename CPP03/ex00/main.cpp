/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:22 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 19:40:40 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Huan("Pedro");
	Huan.display();
	Huan.attack("Grzegorz Brzęczyszczykiewicz");
	Huan.takeDamage(4);
	Huan.takeDamage(7);
	Huan.takeDamage(11);
	Huan.beRepaired(1234);
	std::cout << "____________________________________________________" << std::endl;
	ClapTrap Merzedes("Benz");
	Merzedes.takeDamage(3);
	Merzedes.beRepaired(234);

	ClapTrap Jealousy(Merzedes);
	Jealousy.display();
}