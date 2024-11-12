/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:00:07 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 17:04:13 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _num;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator = (const Fixed& other);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed(const int num);
		Fixed(const float num);
		float toFloat(void) const;
		int toInt(void) const;

		bool operator < (const Fixed& fix1);
		bool operator > (const Fixed& fix1);
		bool operator <= (const Fixed& fix1);
		bool operator >= (const Fixed& fix1);
		bool operator == (const Fixed& fix1);
		bool operator != (const Fixed& fix1);

		Fixed operator + (const Fixed& fix1);
		Fixed operator - (const Fixed& fix1);
		Fixed operator * (const Fixed& fix1);
		Fixed operator / (const Fixed& fix1);
	
		Fixed& operator ++ (void);
		Fixed operator ++ (int);
		Fixed& operator -- (void);
		Fixed operator -- (int);

		static Fixed& min(Fixed& num1, Fixed& num2);
		static const Fixed& min(const Fixed& num1, const Fixed& num2);

		static Fixed& max(Fixed& num1, Fixed& num2);
		static const Fixed& max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& o, Fixed const& f);

#endif