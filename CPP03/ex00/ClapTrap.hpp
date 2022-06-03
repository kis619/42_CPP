/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:02:47 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 19:31:46 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H
# include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hp;
		int _energy;
		int _attack_dmg;
		bool canPerformAction(void);
		
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &);
		void display(void);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif