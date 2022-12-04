/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:35:02 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/13 16:16:28 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)	{
	this->_fpVal = 0 << _fBits;;
	std::cout << "Default constructor called" << std::endl;
}

/*From integer numbers
This is the easiest case. Having an integer value, just shift it the number of fractional bits to the left to skip the fractional part. This also works for negative values as integer values are stored the same way (in two-complement from) as the integer part of our fixed-point numbers.*/

Fixed::Fixed(int const n) : _fpVal(n << this->_fBits)	{
	std::cout << "Int constructor called with " << n << std::endl;
}

/*From floating-point numbers
At first, a constant SUNFP_ONE is introduced that represents the value 1 in fixed-point format. Using the previous chapter, this is just 1 << NUM_FRAC_BITS, thus 0x00010000. This constant is used to build and create a fractional value between 0 and 1 in fixed-point number - just multiply it with SUNFP_ONE!*/

Fixed::Fixed(float const n)	{
	std::cout << "Float constructor called with " << n << std::endl;

//	int		intPart = static_cast<int>(n);
//	float	fltPart = n - intPart;
//	this->_fpVal = (intPart << this->_fBits);
//	this->_fpVal += static_cast<int>((1 << this->_fBits) * fltPart);
	this->_fpVal = static_cast<int>(roundf(n * (1 << this->_fBits)));
}

float	Fixed::toFloat(void) const	{
	return (static_cast<float>(this->_fpVal / static_cast<float>(1 << this->_fBits)));
}
int		Fixed::toInt(void) const	{
	return (static_cast<int>(this->_fpVal >> this->_fBits));
}

Fixed::Fixed(Fixed const &src)	{
	std::cout << "Fixed point number copy constructed" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)	{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)	{
	this->_fpVal = rhs.getRawBits();
	std::cout << "Fixed point assignation called" << std::endl;
	return (*this);
}

void	Fixed::setRawBits(int const raw)	{
	std::cout << "setRawBits called" << std::endl;
	this->_fpVal = raw;
}

int	Fixed::getRawBits(void) const	{
	std::cout << "getRawBits called" << std::endl;
	return (this->_fpVal);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fp)	{
	o << fp.toFloat();
	return (o);
}
