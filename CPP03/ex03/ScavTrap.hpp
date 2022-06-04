/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:07:58 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/04 15:22:59 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &);
		
		void guardGate(void);
		void attack(const std::string &);
		void setEnergy(void);	
};

#endif 
