/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:57 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 01:24:53 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook()
{
	this->_nContacts = 0;
	this->_full = false;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::add(void)
{
	Contact		contact;
	std::string contact_info;
	
	std::cout << "Please enter the contact's first name: " << std::endl;
	std::getline(std::cin, contact_info);
	contact.set_firstName(contact_info);
	std::cout << "Please enter the contact's last name: " << std::endl;
	std::getline(std::cin, contact_info);
	contact.set_lastName(contact_info);
	std::cout << "Please enter the contact's nickname: " << std::endl;
	std::getline(std::cin, contact_info);
	contact.set_nickName(contact_info);
	std::cout << "Please enter the contact's phone number: " << std::endl;
	std::getline(std::cin, contact_info);
	contact.set_phone(contact_info);
	std::cout << "Please enter the contact's darkest secret: " << std::endl;
	std::getline(std::cin, contact_info);
	contact.set_darkestSecret(contact_info);
	
	if (this->_nContacts == 8)
	{
		this->_nContacts = 0;
		this->_full = true;
	}
		
	this->_contacts[_nContacts] = contact;
	this->_nContacts++;
}

std::string PhoneBook::_format_output(std::string output) const
{
	std::string formatted;
	
	if (output.length() > 10)
	{
		formatted = output.substr(0, 10);
		formatted[9] = '.';
		return (formatted);
	}	
	return (output);
}

void PhoneBook::search(void) const
{
	std::cout << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << '|' << std::setfill(' ') << std::setw(10) << "First name";
	std::cout << '|' << std::setfill(' ') << std::setw(10) << "Last name";
	std::cout << '|' << std::setfill(' ') << std::setw(10) << "Nickname" << std::endl;
	
	for(int i = 0; i < 8; i++)
	{
		if (this->_full == 0 && i >= _nContacts)
			break ;
		std::cout << std::right << std::setfill(' ') << std::setw(10) << i;
		std::cout << std::right << '|' << std::setfill(' ') << std::setw(10) << _format_output(this->_contacts[i].get_firstName());
		std::cout << std::right << '|' << std::setfill(' ') << std::setw(10) << _format_output(this->_contacts[i].get_lastName());
		std::cout << std::right << '|' << std::setfill(' ') << std::setw(10) << _format_output(this->_contacts[i].get_nickName()) << std::endl;
	}
	
	std::string			prompt;
	std::stringstream	str_stream;
	int					num;
	bool				found_match = false;
	
	std::cout << "Please enter the desired index:" << std::endl;
	std::getline(std::cin, prompt);	
	str_stream << prompt;
	str_stream >> num;
	
	for(int i = 0; i < 8; i++)
	{
		if (this->_full == 0 && i >= _nContacts)
			break ;
		if (num == i)
			found_match = true;
	}
	if (found_match)
		std::cout << "Match found\n";
	else
		std::cout << "No match found\n";
	
}

int PhoneBook::get_nContacts(void) const
{
	return(_nContacts);
}

