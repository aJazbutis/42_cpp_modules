/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:17:18 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/30 15:14:27 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class	MutantStack: public std::stack<T>	{
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack(void){};
		~MutantStack(void){};
		MutantStack(MutantStack const & src): std::stack<T>(src){};
		MutantStack	&operator=(MutantStack const & rhs)	{
			if (this == &rhs)
				return (*this);
			this->c = rhs.c;
			return (*this);
		};
		iterator	begin()	{
			return (std::stack<T>::c.begin());
		};
		iterator	end()	{
			return (std::stack<T>::c.end());
		};
};

#endif
