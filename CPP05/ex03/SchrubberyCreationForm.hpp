/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:56:43 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:30:12 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUB_HPP
# define SHRUB_HPP
# include "AForm.hpp"
# include <fstream>

class SchrubberyCreationForm : public AForm
{
	public:
		SchrubberyCreationForm(std::string);
		SchrubberyCreationForm(const SchrubberyCreationForm &);
		virtual ~SchrubberyCreationForm(void);
		SchrubberyCreationForm &operator=(const SchrubberyCreationForm &);

		const std::string getName(void) const;
		void executeSafe(const Bureaucrat &) const;

	private:
		std::string _target;
};

#endif