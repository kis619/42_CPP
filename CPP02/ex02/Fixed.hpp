/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 08:44:42 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 15:15:02 by kmilchev         ###   ########.fr       */
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

		//Comparison
		bool operator==(const Fixed &) const;
		bool operator>(const Fixed &) const;
		bool operator<(const Fixed &) const;
		bool operator>=(const Fixed &) const;
		bool operator<=(const Fixed &) const;
		bool operator!=(const Fixed &) const;

		//Arithmetic
		Fixed operator+(const Fixed &) const;
		Fixed operator-(const Fixed &) const;
		Fixed operator*(const Fixed &) const;
		Fixed operator/(const Fixed &) const;

		//Increment Decrement
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		
		//Min and Max
		static Fixed &min(Fixed &, Fixed &);
		const static Fixed &min(const Fixed &, const Fixed &);
		static Fixed &max(Fixed &, Fixed &);
		const static Fixed &max(const Fixed &, const Fixed &);
};

std::ostream& operator<<(std::ostream &o, Fixed const & rhs);
#endif