/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:56:43 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:30:01 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT_HPP
# define ROBOT_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(const RobotomyRequestForm &);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);

		const std::string getName(void) const;
		void executeSafe(const Bureaucrat &) const;

	private:
		std::string _target;
};

#endif