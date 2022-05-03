/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:45:58 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 00:03:54 by kmilchev         ###   ########.fr       */
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
	this->_firstName = name;
}

void Contact::set_lastName(std::string name)
{
	this->_lastName = name;
}

void Contact::set_nickName(std::string name)
{
	this->_nickName = name;
}

void Contact::set_phone(std::string phone_number)
{
	this->_phoneNum = phone_number;
}

void Contact::set_darkestSecret(std::string secret)
{
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