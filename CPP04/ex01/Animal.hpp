/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:26:52 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 20:45:12 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal(void);
		Animal(const Animal &);
		virtual ~Animal(void);
		Animal & operator=(const Animal &);
		
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif