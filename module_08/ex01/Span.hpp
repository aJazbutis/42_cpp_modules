/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:00:33 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/29 23:49:18 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <iterator>

class	Span	{
	private:
		unsigned int	_N;
		std::vector<int>		_vct;
		Span(void);
		//unsigned int distance(int a, int b)	const;
	public:
		~Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		Span &operator=(Span const & rhs);
		class	AlreadyFullException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		class	NoSpanException: public std::exception	{
			public:
				virtual const char *what() const throw();
		};
		int		 			getValue(unsigned int i) const;
		unsigned int const	& getSize(void) const;
		void				addNumber(int n);
		int					shortestSpan(void) const;
		int					longestSpan(void) const;
		void				addManyNumbers(std::vector<int> const & arr);	
};

std::ostream &operator<<(std::ostream & o, Span const & span);
#endif
