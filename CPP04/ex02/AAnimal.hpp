/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:26:52 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 22:09:45 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class AAnimal
{
	protected:
		std::string _type;
		
	public:
		AAnimal(void);
		AAnimal(const AAnimal &);
		virtual ~AAnimal(void);
		AAnimal & operator=(const AAnimal &);
		
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif