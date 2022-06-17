/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:13:18 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 08:40:18 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <stdexcept>
# include <iostream>
# include <algorithm>
# define COLOR_RED "\033[31;1m"
# define COLOR_GREEN "\033[32;1m"

template <typename T>
typename T::iterator easyfind(T &arr, int i)
{
	
	typename T::iterator iter;
	iter = std::find(arr.begin(), arr.end(), i);
	if (iter == arr.end())
		throw std::invalid_argument("Easyfinder: no such element");
	return (iter);
}

#endif