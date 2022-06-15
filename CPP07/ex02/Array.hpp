/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:31:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/15 13:41:47 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRY_HPP
# define ARRY_HPP
# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T		*_arry;
		size_t	_size;
	
	public:
		Array(void);
		Array(unsigned int);
		virtual ~Array(void);
		Array(const Array<T> &); //idk if I need the <T>
		Array & operator=(const Array<T> &);
		T & operator[](size_t);
		size_t size(void) const;
};

# include "Array.tpp"
#endif