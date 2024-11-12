/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:00:13 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 17:02:36 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0) {
}

Fixed::Fixed(const Fixed& other) {
	this->_num = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other)
		this->_num = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits() const {
	return (this->_num);
}

void Fixed::setRawBits(int const raw) {
	this->_num = raw;
}

Fixed::Fixed(const int num) {
	this->_num = num << this->_bits;
}

Fixed::Fixed(const float num) {
	this->_num = roundf(num * (1 << this->_bits));
}

float Fixed::toFloat(void) const {
	return ((float)(this->_num) / (1 << this->_bits));
}

int Fixed::toInt(void) const {
	return (this->_num >> this->_bits);
}

std::ostream& operator<<(std::ostream& o, Fixed const& f) {
	o << f.toFloat();
	return o;
}

bool Fixed::operator<(const Fixed& fix1) {
	if (this->_num < fix1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>(const Fixed& fix1) {
	if (this->_num > fix1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(const Fixed& fix1) {
	if (this->_num <= fix1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(const Fixed& fix1) {
	if (this->_num >= fix1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator==(const Fixed& fix1) {
	if (this->_num == fix1.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(const Fixed& fix1) {
	if (this->_num != fix1.getRawBits())
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+(const Fixed& fix1) {
	return (this->toFloat() + fix1.toFloat());
}

Fixed Fixed::operator-(const Fixed& fix1) {
	return (this->toFloat() - fix1.toFloat());
}

Fixed Fixed::operator*(const Fixed& fix1) {
	return (this->toFloat() * fix1.toFloat());
}

Fixed Fixed::operator/(const Fixed& fix1) {
	return (this->toFloat() / fix1.toFloat());
}

Fixed& Fixed::operator++(void) {
	++this->_num;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_num++);
	return (tmp);
}

Fixed& Fixed::operator--(void) {
	--this->_num;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	tmp.setRawBits(this->_num--);
	return (tmp);
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2) {
	if (num1.getRawBits() <= num2.getRawBits())
		return num1;
	return num2;
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2) {
	if (num1.getRawBits() <= num2.getRawBits())
		return (num1);
	return num2;
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2) {
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2) {
	if (num2.getRawBits() > num1.getRawBits())
		return num2;
	return num1;
}