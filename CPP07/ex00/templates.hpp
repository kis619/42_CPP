/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:23:37 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/14 17:49:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMP_HPP
# define TEMP_HPP

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
