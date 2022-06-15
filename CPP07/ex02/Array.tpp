/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:39:51 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/15 17:07:21 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
template <typename T>
Array<T>::Array(void) : _size(0), _arry(NULL)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _arry(new T[n])
{
}

template<typename T>
Array<T>::Array(const Array <T>& copy)
{
	*this = copy;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_arry)
		delete[] this->_arry;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array <T>& other)
{
	if (this->_arry)
		delete[] this->_arry;
	this->_size = other._size;
	this->_arry = new T[this->_size];
	for(int i = 0; i < this->_size; i++)
		this->_arry[i] = other._arry[i];
	return(*this);
}

template <typename T>
T & Array<T>::operator[](size_t index)
{
	if (index >= this->_size)
    	throw std::out_of_range( "Index out of Range" );
		
	return(this->_arry[index]);
}

template <typename T>
size_t Array<T>::size(void) const
{
	return (this->_size);
}
