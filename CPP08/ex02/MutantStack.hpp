/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:20:31 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 15:26:18 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
# include <stack>

template <typename T> 
class MutantStack : public std::stack<T>
{

	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		virtual ~MutantStack(void);
		MutantStack &operator=(const MutantStack &ms);
	
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void);
		iterator end(void);
};


#include "MutantStack.tpp"

#endif