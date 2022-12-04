/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:14:40 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/14 20:10:47 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)	{
//	std::cout << "Default Point constructed" << std::endl;
}	

Point::Point(float const x, float const y): _x(x), _y(y)	{
//	std::cout << "Point constructed with: " << x << " and " << y << std::endl;
}

Point::Point(Point	const &src): _x(src.getX()), _y(src.getY())	{
//	std::cout << "Point copy constructed of: " << src.getX()  << " and " << src.getY() << std::endl;
}

Point::~Point(void)	{
//	std::cout << "A Point is no more" << std::endl;
}

Point	&Point::operator=(Point	const &rhs)	{
	if (this == &rhs)
		return (*this);
//	std::cout << "Point assigned" << std::endl;
//	this->_x = rhs.getX();
//	this->_y = rhs.getY();
	return (*this);
}

Fixed	const &Point::getX(void) const	{
	return (this->_x);
}

Fixed	const &Point::getY(void) const	{
	return (this->_y);
}

std::ostream	&operator<<(std::ostream &o, Point const &point)	{
	o << "(" <<  point.getX() << ", " << point.getY() << ")";
	return (o);
}

bool	Point::operator==(Point const &rhs) const	{
	return (this->getX() == rhs.getX() && this->getY() == rhs.getY());
}
