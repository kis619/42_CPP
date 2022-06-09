/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:14:56 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 14:13:50 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern & Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern(void)
{
}



AForm * Intern::makeForm(std::string formName, std::string formTarget)
{
	const std::string forms[3] = {"robotomy request", "presidential pardon", "schrubbery creation"};
	int num = -1;
	
	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			num = i;
			break ;
		}
	}
	
	switch (num + 1)
	{
	case 1:
		std::cout << "Intern creates a " << formName << std::endl;
		return (new RobotomyRequestForm(formTarget));
		break;
	
	case 2:
		std::cout << "Intern creates a " << formName << std::endl;
		return (new PresidentialPardonForm(formTarget));
		break;
	
	case 3:
		std::cout << "Intern creates a " << formName << std::endl;
		return (new SchrubberyCreationForm(formTarget));
		break;
	
	default:
		std::cout << COLOR_RED << "No such form exists" << COLOR_DEFAULT << std::endl;
		break;
	}
	return (NULL);
}