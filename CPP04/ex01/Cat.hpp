/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:37:08 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 21:08:06 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{	
	private:
		Brain *_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &);
		Cat & operator=(const Cat &);
		virtual void makeSound(void) const;
		std::string getIdea(int) const;
		void setIdea(const std::string &, int);
};

#endif