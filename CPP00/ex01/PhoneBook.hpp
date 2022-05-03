/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:44:47 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 00:36:55 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {

	public:
		
		PhoneBook(void);
		~PhoneBook(void);
		
		void add(void);
		void search(void) const;
		int get_nContacts(void) const;
		
	private:
		std::string _format_output(std::string string) const;
		Contact	_contacts[8];
		int		_nContacts;
		bool	_full;
};


#endif