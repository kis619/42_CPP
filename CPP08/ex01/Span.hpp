/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:54:41 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 13:18:27 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>
# include <cmath>
# define COLOR_RED "\033[31;1m"
# define COLOR_GREEN "\033[32;1m"
# define COLOR_DEFAULT "\033[0m"

enum MAX_MIN
{
	MIN_SPAN,
	MAX_SPAN,
};

class Span
{
	private:
		unsigned int _maxAmt;
		std::vector<int> _span;
		unsigned int getShortLongSpan(MAX_MIN) const;
		
	public:
		Span(unsigned int);
		Span(const Span &);
		Span & operator=(const Span &);
		virtual ~Span(void);

		void addNumber(int);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void addMultipleNUmbers(std::vector<int>::iterator, std::vector<int>::iterator);
		std::vector<int> getSpan(void) const;
	
	class OutOfRangeException : public std::exception
	{
		private:
			virtual const char *what(void) const throw();
	};
};

#endif