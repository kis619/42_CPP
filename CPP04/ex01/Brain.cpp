/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:59:54 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/06 20:46:46 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Idle thought";
}

Brain::Brain(const Brain & copy)
{
	std::cout << "Brain constructor" << std::endl;
	*this = copy;
}

Brain & Brain::operator=(const Brain & copy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

std::string Brain::getIdea(int idx)
{
	return(this->_ideas[idx]);
}

void Brain::setIdea(const std::string &idea, int idx)
{
	this->_ideas[idx] = idea;
}