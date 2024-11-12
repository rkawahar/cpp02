/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:11:16 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 17:00:53 by kawaharadar      ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& o, Fixed const& f);

#endif