/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 00:52:52 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{	
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &);
		Dog & operator=(const Dog &);
		virtual void makeSound(void) const;
		
};

#endif