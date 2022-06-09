/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 13:11:58 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 13:51:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "SchrubberyCreationForm.hpp"


class Intern
{
	public:
		Intern();
		Intern(const Intern &);
		virtual ~Intern(void);
		Intern &operator=(const Intern &);
		
		AForm *makeForm(std::string, std::string);
};

#endif
