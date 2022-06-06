/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:07:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 21:30:22 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <string>
#include <stdlib.h>

int main()
{
	Dog *dog = new Dog();
	Cat *cat = new Cat();
	std::string sep = "_________________________";
	
	std::cout << sep << std::endl;
	std::cout << dog->getIdea(6) << std::endl;
	dog->setIdea("Eat lemons", 6);
	dog->setIdea("Make tea", 1);
	dog->setIdea("Bake tea", 1);
	dog->setIdea("Get backed", 8);
	std::cout << dog->getIdea(6) << std::endl;
	std::cout << dog->getIdea(1) << std::endl;
	std::cout << dog->getIdea(8) << std::endl;
	std::cout << dog->getType() << std::endl;
	
	std::cout << sep << std::endl;
	cat->setIdea("Rule the world", 69);
	std::cout << cat->getIdea(69) << std::endl;
	std::cout << cat->getType() << std::endl;
	
	std::cout << sep << std::endl;
	delete dog;
	delete cat;
	
	Animal *animals[10];
	std::cout << sep << std::endl;
	
	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << sep << std::endl;
	}
	std::cout << sep << std::endl;
	
	for(int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
		std::cout << sep << std::endl;
	}
}

