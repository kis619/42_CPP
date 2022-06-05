/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 01:05:07 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{	
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &);
		WrongCat & operator=(const WrongCat &);
		void makeSound(void) const;
		
};

#endif