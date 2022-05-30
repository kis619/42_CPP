/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:44:42 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/30 11:22:49 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
	private:
		int _val;
		static const int _frBitCount = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed &operator=(const Fixed &);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif