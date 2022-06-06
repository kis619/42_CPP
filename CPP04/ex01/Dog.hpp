/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 21:04:39 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{	
	private:
		Brain *_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &);
		Dog & operator=(const Dog &);
		virtual void makeSound(void) const;
		std::string getIdea(int idx) const;
		void setIdea(const std::string &, int);
};

#endif