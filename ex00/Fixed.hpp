/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:38:51 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/08 08:10:29 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private: int _num;
	private: static const int _bits = 8;

	public: Fixed();
	public: Fixed(const Fixed& other);
	public: Fixed& operator = (const Fixed& other);
	public: ~Fixed();
	public: int getRawBits(void) const;
	public: void setRawBits(int const raw);
};

#endif