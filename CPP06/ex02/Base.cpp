/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 03:00:15 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 03:49:41 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <exception>

Base::~Base(){};

Base * generate(void)
{	
	srand(time(NULL));
	int idx = rand() % 3;
	
	switch (idx)
	{
	case 0:
		return(new A);
	case 1:
		return(new B);
	default :
		return(new C);
	}
}

void	identify(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Class <A>" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Class <B>" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "Class <C>" << std::endl;
}

// void	identify(Base & p)
// {
// 	try
// 	{
// 		dynamic_cast<A &>(p);
// 		std::cout << "Class <A>" << std::endl;
// 		return ;
// 	}
// 	catch(std::bad_cast &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		dynamic_cast<B &>(p);
// 		std::cout << "Class <B>" << std::endl;
// 		return ;
// 	}
// 	catch(std::bad_cast &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		dynamic_cast<C &>(p);
// 		std::cout << "Class <C>" << std::endl;
// 		return ;
// 	}
// 	catch(std::bad_cast &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }

void	identify(Base & p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "Class <A>" << std::endl;
		return ;
	}
	catch (std::exception & error)
	{
		std::cerr << error.what()<< std::endl;
	}
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "Class <B>" << std::endl;
		return ;
	}
	catch (std::exception & error)
	{
		std::cerr<< error.what()<< std::endl;
	}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "Class <C>" << std::endl;
		return ;
	}
	catch (std::exception & error)
	{
		std::cerr  << error.what() << std::endl;
	}
}