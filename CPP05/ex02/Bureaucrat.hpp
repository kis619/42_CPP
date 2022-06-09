/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 10:01:35 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUR_HPP
# define BUR_HPP
# define MIN_GRADE 150
# define MAX_GRADE 1
# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		
	public:
		Bureaucrat(const std::string &, int);
		Bureaucrat(const Bureaucrat &);
		virtual ~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &);
		
		const std::string getName(void) const;
		int getGrade(void) const;
		void setGrade(int);
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(AForm &);
		
		////EXCEPTIONS
		class GradeTooHighException : public std::exception
		{
			private:
				virtual const char *what(void) const throw();
		
		};
		
		class GradeTooLowException : public std::exception
		{
			private:
				virtual const char *what(void) const throw(); 
		};

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &);
#endif