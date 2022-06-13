/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 02:34:20 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 02:50:39 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	int a;
	int b;	
} Data;

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data first;
	Data *firstPtr;
	Data *secondPtr;
	
	first.a = 619;
	first.b = 42;
	firstPtr = &first;
	std::cout << "a = " << firstPtr->a << "\nb = " << (*firstPtr).b << std::endl;
	uintptr_t second = serialize(firstPtr);
	std::cout << second << std::endl;
	secondPtr = deserialize(second);
	std::cout << "a = " << secondPtr->a << "\nb = " << (*secondPtr).b << std::endl;
	
	return (0);
}