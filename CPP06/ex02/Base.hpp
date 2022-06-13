/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 02:54:23 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 03:42:00 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>
# include <iostream>

class Base
{
	public:
		virtual ~Base(void);
};

Base * generate(void);
void	identify(Base * p);
void	identify(Base & p);
#endif