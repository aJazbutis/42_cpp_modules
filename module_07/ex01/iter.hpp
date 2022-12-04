/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:50:01 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 20:30:53 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int size, void (*func)(T &a))	{
	for (int i = 0; i < size; i++)
		(*func)(array[i]);
}

template<typename T>
void	increment(T	&arg)	{
	arg = arg + 1;
}

#endif
