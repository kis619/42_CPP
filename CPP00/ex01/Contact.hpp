/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 10:45:23 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/04 00:00:27 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {
	
	public:
		Contact(void);
		~Contact(void);
		
		void set_firstName(std::string str);
		void set_lastName(std::string str);
		void set_nickName(std::string str);
		void set_phone(std::string str);
		void set_darkestSecret(std::string str);
		
		std::string get_firstName(void) const;
		std::string get_lastName(void) const;
		std::string get_nickName(void) const;
		std::string get_phone(void) const;
		std::string get_secret(void) const;
	
	private:	
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNum;
		std::string _darkestSecret;
};

#endif