/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:45:21 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/13 16:15:40 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)	{
	this->_fpVal = 0 << _fBits;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)	{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)	{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(Fixed const &rhs)	{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fpVal = rhs.getRawBits();
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
	o << fp.getRawBits();
	return (o);
}
