/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:04:34 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/28 22:31:22 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const &getType(void);
		void setType(std::string type);
};


#endif