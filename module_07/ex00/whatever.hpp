/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:09:59 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 15:56:08 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
T const &	max(T const & x, T const & y)	{
	return (x > y ? x : y);
}

template<typename T>
T const &	min(T const & x, T const & y)	{
	return (x < y ? x : y);
}

template<typename T>
void	swap(T & x, T & y)	{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

#endif
