/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:07:42 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/14 17:50:58 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"

class	Point	{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point(void);
		~Point(void);
		Point(float const x, float const y);
		Point(Point	const &src);
		Point 	&operator=(Point const &rhs);
		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;
		bool	operator==(Point const &rhs) const;
};

std::ostream	&operator<<(std::ostream &o, Point const &point);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
