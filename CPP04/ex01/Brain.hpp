/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:54:04 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 20:46:54 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &);
		Brain &operator=(const Brain &);
		std::string getIdea(int idx);
		void setIdea(const std::string &, int);
		
};

#endif