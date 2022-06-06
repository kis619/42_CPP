/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:05:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/07 01:18:37 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUR_HPP
# define BUR_HPP
# include <iostream>

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;
		
	public:
		Bureaucrat(const std::string &, int);
		Bureaucrat(const Bureaucrat &);
		virtual ~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &);
		
		std::string getName(void) const;
		int getGrade(void) const;
		void setGrade(int);
		
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

#endif