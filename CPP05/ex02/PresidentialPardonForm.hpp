/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:56:43 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:30:07 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm &);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);

		const std::string getName(void) const;
		void executeSafe(const Bureaucrat &) const;

	private:
		std::string _target;
};

#endif