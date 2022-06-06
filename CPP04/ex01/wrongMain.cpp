/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongMain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:07:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 01:00:57 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::string sep = "__________________________________________\n";

	const WrongAnimal* meta = new WrongAnimal();

	std::cout << sep;
	WrongAnimal* i = new WrongCat();
	std::cout << sep;
	
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << sep;
	i->makeSound();
	meta->makeSound();
	std::cout << sep;
	
	delete meta;
	delete i;
}