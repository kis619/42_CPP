/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:25:35 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/09 11:45:27 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "colours_grades.hpp"
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_passGrade;
		const int			_execGrade;
	
	public:
		AForm(std::string, int, int);
		AForm(const AForm &);
		virtual ~AForm(void);
		AForm & operator=(const AForm&);
	
	////Getters
		virtual const std::string getNameForm(void) const;
		bool getStatus(void) const;
		int getPassGrade(void) const;
		int getExecGrade(void) const;
	
	////Setters
		void setStatus(bool);
		
	////Checkers
		void checkPassGrade(int);
		void checkExecGrade(int);
	
	////Miscellaneous
		void beSigned(Bureaucrat &);
		virtual void executeSafe(const Bureaucrat &) const = 0;
		virtual void execute(const Bureaucrat &);
		
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

	class FormNotSignedException : public std::exception
	{
		private:
			virtual const char *what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &, const AForm&);
#endif