/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:56:09 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/11 16:58:29 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed	{
	private:
		int			_fpVal;
		static int	const	_fBits = 8;
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &src);
		~Fixed(void);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		Fixed	&operator=(Fixed const &rhs);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		/*When specifying an overloaded operator for the postfix form of the increment or decrement operator, the additional argument must be of type int; specifying any other type generates an error.*/
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		static const	Fixed &min(Fixed const &a, Fixed const &b);
		static	Fixed &min(Fixed &a, Fixed &b);
		static const	Fixed &max(Fixed const &a, Fixed const &b);
		static	Fixed &max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif
