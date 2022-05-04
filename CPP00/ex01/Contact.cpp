/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:45:58 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 12:47:39 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::set_firstName(std::string name)
{
	if (name.compare("") || name.compare("\n"))
	{
		this->_firstName = "To be added";
		return ;
	}
	this->_firstName = name;
}

void Contact::set_lastName(std::string name)
{
	if (name.compare("") || name.compare("\n"))
	{
		this->_lastName = "To be added";
		return ;
	}
	this->_lastName = name;
}

void Contact::set_nickName(std::string name)
{
	if (name.compare("") || name.compare("\n"))
	{
		this->_nickName = "To be added";
		return ;
	}
	this->_nickName = name;
}

void Contact::set_phone(std::string phone_number)
{
	if (phone_number.compare("") || phone_number.compare("\n"))
	{
		this->_phoneNum = "To be added";
		return ;
	}
	this->_phoneNum = phone_number;
}

void Contact::set_darkestSecret(std::string secret)
{
	if (secret.compare("") || secret.compare("\n"))
	{
		this->_darkestSecret = "To be added";
		return ;
	}
	this->_darkestSecret = secret;
}

std::string Contact::get_firstName(void) const
{
	return(_firstName);
}

std::string Contact::get_lastName(void) const
{
	return (_lastName);
}

std::string Contact::get_nickName(void) const
{
	return (_nickName);
}

std::string Contact::get_phone(void) const
{
	return (_phoneNum);
}

std::string Contact::get_secret(void) const
{
	return (_darkestSecret);
}