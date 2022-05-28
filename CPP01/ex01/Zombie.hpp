/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:41:32 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/28 19:06:42 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void nameSetter(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif