/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:53:44 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:39:56 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SchrubberyCreationForm.hpp"

SchrubberyCreationForm::SchrubberyCreationForm(std::string target) : AForm("Create Shrub", SIGN_SCHRUB, EXEC_SCHRUB), _target(target)
{
	std::cout << "Schrub constructor" << std::endl;
}

SchrubberyCreationForm::SchrubberyCreationForm(const SchrubberyCreationForm &copy) : AForm(copy)
{
	std::cout << "Schrub copy constructor" << std::endl;
	*this = copy;
}

SchrubberyCreationForm::~SchrubberyCreationForm(void)
{
	std::cout << "Schrub constructor" << std::endl;	
}

SchrubberyCreationForm & SchrubberyCreationForm::operator=(const SchrubberyCreationForm &other)
{
	this->setStatus(other.getStatus());
	return (*this);
}

const std::string SchrubberyCreationForm::getName(void) const
{
	return (this->_target);
}

void SchrubberyCreationForm::executeSafe(const Bureaucrat & barb) const
{
	std::ofstream outFile((this->_target + "_schrubbery").c_str());
	if (outFile.is_open())
		outFile <<
		"         &&& &&  & &&                          &&& &&  & &&" << std::endl <<
		"	    && &\\/&\\|& ()|/ @, &&               && &\\/&\\|& ()|/ @, &&" << std::endl <<
		"      &\\/(/&/&||/& /_/)_&/_&               &\\/(/&/&||/& /_/)_&/_&" << std::endl <<
		"   &() \\/&|()|/&\\/ '%\" & ()            &() \\/&|()|/&\\/ '%\" & ()" << std::endl <<
		"  &_\\_&&_\\ |& |&&/&__%_/_& &&         &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<
		"&&   && & &| &| /& & % ()& /&&        &&   && & &| &| /& & % ()& /&&" << std::endl <<
		" ()&_---()&\\&\\|&&-&&--%---()~        ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<
		"     &&     \\|||                          &&     \\|||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"             |||                                  |||" << std::endl <<
		"       , -=-~  .-^- _                       , -=-~  .-^- _" << std::endl;
	else 
	{
		std::cerr << "Could not open file" << std::endl;
		return ;
	}
	outFile.close();
	std::cout << this->getNameForm() << " was signed by " << barb.getName() << std::endl;
}