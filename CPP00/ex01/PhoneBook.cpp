/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:05:57 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 12:36:18 by kmilchev         ###   ########.fr       */
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

void PhoneBook::_display_all(void) const
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
}

void PhoneBook::_display_contact(Contact contact) const
{
	std::cout << "First name: " << contact.get_firstName() << std::endl;
	std::cout << "Last name: " << contact.get_lastName() << std::endl;
	std::cout << "Nickname: " << contact.get_nickName() << std::endl;
	std::cout << "Phone: " << contact.get_phone() << std::endl;
	std::cout << "Secret: " << contact.get_secret() << std::endl;
}
void PhoneBook::search(void) const
{
	this->_display_all();
	
	std::string			prompt;
	std::stringstream	str_stream;
	int					num;
	
	std::cout << "Please enter the desired index:\n";
	std::getline(std::cin, prompt);	
	str_stream << prompt;

	if (prompt.length() != 1 || prompt[0] < '0' || prompt[0] > '8')
	{
		std::cout << "Invalid Index\n";
		return ;
	}
	
	str_stream >> num;
	
	for(int i = 0; i < 8; i++)
	{
		if (this->_full == 0 && i >= _nContacts)
		{
			std::cout << "Index not found\n";
			break ;
		}
		if (num == i)
		{
			this->_display_contact(this->_contacts[i]);
			break ;
		}
	}
	
}

int PhoneBook::get_nContacts(void) const
{
	return(_nContacts);
}

