/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:38:51 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:57:53 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
};

#endif