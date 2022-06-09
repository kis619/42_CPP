/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:48:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 14:14:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "SchrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "colours_grades.hpp"
#include "Intern.hpp"

int main(void)
{
	std::string sep = "___________________________";

	std::cout << sep << std::endl;
	
	Bureaucrat anton("Anton", 1);
	Intern		someRandomIntern;
	AForm		*rrf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	std::cout << sep << std::endl;
	delete rrf;
	
	rrf = someRandomIntern.makeForm("presidential pardon", "Da");
	std::cout << *rrf << std::endl;
	std::cout << sep << std::endl;
	delete rrf;
	
	rrf = someRandomIntern.makeForm("schrubbery creation", "black");
	std::cout << *rrf << std::endl;
	std::cout << sep << std::endl;
	anton.signForm(*rrf);
	std::cout << sep << std::endl;
	anton.executeForm(*rrf);
	std::cout << sep << std::endl;
	std::cout << *rrf << std::endl;
	delete rrf;
	
	std::cout << sep << std::endl;
	rrf = someRandomIntern.makeForm("your sister", "black");
	
	return (0);
}