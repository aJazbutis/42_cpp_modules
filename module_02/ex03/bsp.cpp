/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:25:23 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/14 20:38:17 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	S(Point const A, Point const B, Point const C)	{
	Fixed	S;
	S = ((B.getX() - A.getX()) * (C.getY() - A.getY())
		 - (C.getX() - A.getX()) * (B.getY() - A.getY())) / 2.0f;
	if (S < 0)
		S = S * (-1);
	return (S);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)	{
	if (point == a || point == b || point == c)
		return (false);
	Fixed s0 = S(a, b, c);
	if (s0 == 0)
		return (false);
	Fixed s1 = S(point, a, b);
	if (s1 == 0)
		return (false);
	Fixed s2 = S(point, b, c);
	if (s2 == 0)
		return (false);
	Fixed s3 = S(point, c, a);
	if (s3 == 0)
		return (false);
	if (s0 == s1 + s2 + s3)
		return (true);
	return (false);
}
