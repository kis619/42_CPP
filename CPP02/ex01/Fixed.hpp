/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:44:42 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/31 17:59:03 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _val;
		static const int _frBitCount = 8;
		
	public:
		Fixed(void);
		Fixed(int const);
		Fixed(float const);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed &operator=(const Fixed &);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &o, Fixed const & rhs);
#endif