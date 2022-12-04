/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:06:03 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 20:32:01 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)	{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data* deserialize(uintptr_t raw)	{
	Data	*ret;

	ret = reinterpret_cast<Data*>(raw);
	return (ret);
}
