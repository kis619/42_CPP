/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:07:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 00:42:06 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::string sep = "__________________________________________\n";
	Animal tiger = Cat();

	std::cout << sep;
	Animal cat;
	std::cout << sep;
	Dog dog;
	std::cout << sep;

	cat.makeSound();
	dog.makeSound();
	std::cout << sep;

	const Animal* meta = new Animal();
	std::cout << sep;
	const Animal* j = new Dog();
	std::cout << sep;
	Animal* i = new Cat();
	std::cout << sep;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << sep;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << sep;
	
	delete meta;
	delete i;
	delete j;
}