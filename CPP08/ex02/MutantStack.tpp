/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:12 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/19 13:38:25 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T> 
MutantStack<T>::MutantStack(void)
{	
}

template <typename T> 
MutantStack<T>::MutantStack(const MutantStack &copy)
{
	*this = copy;
}

template <typename T> 
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &other)
{
	return(other);
}

template <typename T> 
MutantStack<T>::~MutantStack(void)
{	
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}