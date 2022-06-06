/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:26:52 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 01:05:14 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &);
		virtual ~WrongAnimal(void);
		WrongAnimal & operator=(const WrongAnimal &);
		
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif