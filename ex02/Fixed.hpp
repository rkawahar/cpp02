/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:00:07 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 10:53:30 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private: int _num;
	private: static const int _bits = 8;

	public: Fixed();
	public: Fixed(const Fixed& other);
	public: Fixed& operator = (const Fixed& other);
	public: ~Fixed();
	public: int getRawBits(void) const;
	public: void setRawBits(int const raw);

	public: Fixed(const int num);
	public: Fixed(const float num);
	public: float toFloat(void) const;
	public: int toInt(void) const;

	public: bool operator < (const Fixed& fix1);
	public: bool operator > (const Fixed& fix1);
	public: bool operator <= (const Fixed& fix1);
	public: bool operator >= (const Fixed& fix1);
	public: bool operator == (const Fixed& fix1);
	public: bool operator != (const Fixed& fix1);

	public: Fixed operator + (const Fixed& fix1);
	public: Fixed operator - (const Fixed& fix1);
	public: Fixed operator * (const Fixed& fix1);
	public: Fixed operator / (const Fixed& fix1);
	
	public: Fixed& operator ++ (void);
	public: Fixed operator ++ (int);
	public: Fixed& operator -- (void);
	public: Fixed operator -- (int);

	public: static Fixed& min(Fixed& num1, Fixed& num2);
	public: static const Fixed& min(const Fixed& num1, const Fixed& num2);

	public: static Fixed& max(Fixed& num1, Fixed& num2);
	public: static const Fixed& max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& o, Fixed const& f);

#endif