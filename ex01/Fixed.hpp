/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:11:16 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/08 10:41:14 by kawaharadar      ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& o, Fixed const& f);

#endif