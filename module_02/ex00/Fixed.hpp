/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 18:45:54 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/13 16:25:42 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class	Fixed	{
	private:
		int					_fpVal;
		static int	const	_fBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed	&operator=(Fixed const &rhs);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fp);

#endif
