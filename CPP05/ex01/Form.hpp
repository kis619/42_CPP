/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:25:35 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/08 22:29:50 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# define MIN_PASS_GRADE 150
# define MIN_EXEC_GRADE 150
# define MAX_PASS_GRADE 1
# define MAX_EXEC_GRADE 1
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _passGrade;
		const int _execGrade;
	
	public:
		Form(std::string, int, int);
		Form(const Form &);
		virtual ~Form(void);
		Form & operator=(const Form&);
	
	////Getters
		const std::string getName(void) const;
		bool getStatus(void) const;
		const int getPassGrade(void) const;
		const int getExecGrade(void) const;

	////Checkers
		void checkPassGrade(int);
		void checkExecGrade(int);
	
	////Miscellaneous
		void beSigned(Bureaucrat &);
		
	////Exceptions
	class GradeTooHighException : public std::exception
	{
		private:
			virtual const char *what(void) const throw();
	};
	
	class GradeTooLowException : public std::exception{
		private:
			virtual const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &, const Form&);
#endif