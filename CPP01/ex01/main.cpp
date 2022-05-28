/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:31:32 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/28 19:08:07 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int z_count;
	
	z_count = 5;
	Zombie *horde = zombieHorde(z_count, "");
	for (int i = 0; i < z_count; i++)
		horde[i].announce();

	delete[] horde;
	
	Zombie *newHorde = zombieHorde(z_count, "Krisi");
	for (int i = 0; i < z_count; i++)
		newHorde[i].announce();

	delete[] newHorde;
}