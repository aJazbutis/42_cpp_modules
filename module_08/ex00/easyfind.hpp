/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:38:56 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/30 17:26:17 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <list>
# include <vector>
# include <iostream>
# include <algorithm>
# include <stdexcept>

class	NotFoundException: public std::exception	{
	public:
		virtual char const *what() const throw()	{
			return ("Not found!");
		};
};

template<typename T>
typename T::iterator	easyfind(T hay, int neadle)	{
	typename T::iterator	it;
	typename T::const_iterator	ite = hay.end();
	it = std::find(hay.begin(), hay.end(), neadle);
	if ( it != ite){
		return (it);
	}
	throw (NotFoundException());
//	return (-1);
}
/*template<typename T>
int easyfind(T hay, int neadle)	{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = hay.end();
	int	i = 0;

	for (it = hay.begin(); it != ite; it++)	{
		if (*it == neadle)
			return (i);
		i++;
	}
	throw ("Not found!");
//	return (-1);
}*/

/*template<typename T>
int const & easyfind(T hay, int neadle)	{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = hay.end();

	for (it = hay.begin(); it != ite; it++)	{
		if (*it == neadle)
			return (*it);
	}
	throw ("Not found!");
}*/
#endif
