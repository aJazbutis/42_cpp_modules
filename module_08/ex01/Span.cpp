/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:13:08 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/10/03 20:52:00 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"

Span::Span(void): _N(0)	{
	std::cout << "Default Span construct" << std::endl;
}

Span::~Span(void)	{
	std::cout << "Span destruct" << std::endl;
}

Span::Span(unsigned int N): _N(N)	{
	std::cout << "Span of size " << _N << " construct" << std::endl;
	_vct.reserve(_N);
}

Span::Span(Span const & src): _N(src._N), _vct(src._vct)	{
	std::cout << "Span copy construct" << std::endl;
}

Span &Span::operator=(Span const & rhs)	{
	std::cout << "Span assignement" << std::endl;
	if (this == &rhs)
		return (*this);
	_N = rhs._N;
	_vct.clear();
	_vct.reserve(_N);
	_vct = rhs._vct;
	return (*this);
}

const char *Span::AlreadyFullException::what() const throw()	{
	return ("Already full! 🤷");
}

const char *Span::NoSpanException::what() const throw()	{
	return ("Not enough entries! 🤷");
}

void	Span::addNumber(int n)	{
	try {
		if (_vct.size() == _N)
			throw (Span::AlreadyFullException());
		_vct.push_back(n);
	}
	catch	(std::exception	& e)	{
		std::cerr << e.what() << std::endl;
	}
}
int	Span::shortestSpan(void) const	{
	try {
		if (_vct.size() < 2)
			throw (Span::NoSpanException());
			std::vector<int> copy = _vct;
			std::stable_sort(copy.begin(), copy.end());
			std::vector<int>::iterator it;
			std::vector<int>::iterator ite = copy.end();
			int	ret = longestSpan();
			for (it = copy.begin(); it < ite - 1; it++)	{
				if (*(it + 1) - *it < ret)
					ret = *(it + 1) - *it;
			}
			return (ret);
	}
	catch (std::exception & e)	{
		std::cerr << e.what() << std::endl;
		return (0);
	}

}

int	Span::longestSpan(void) const	{
	try	{
		if (_vct.size() < 2)
			throw (Span::NoSpanException());
		std::vector<int> copy = _vct;
		std::stable_sort(copy.begin(), copy.end());
		return (*(copy.end() - 1) - *(copy.begin()));
	}
	catch (std::exception & e)	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
}

void	Span::addManyNumbers(std::vector<int> const & arr)	{
	try {
		if (_vct.size() == _N)
			throw (Span::AlreadyFullException());
		unsigned int left = _N - _vct.size();
		if (left > arr.size())
			left = arr.size();
		if (left)
			_vct.insert(_vct.end(), arr.begin(), arr.begin() + left); 
	}
	catch	(std::exception	& e)	{
		std::cerr << e.what() << std::endl;
	}
}

unsigned int const & Span::getSize(void) const	{
	return (_N);
}
int	Span::getValue(unsigned int i) const	{
	try	{
		if (i >= _N)
			throw (Span::NoSpanException());
		return (_vct[i]);
	}
	catch (std::exception & e)	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

std::ostream &operator<<(std::ostream & o, Span const & span)	{
	for (unsigned int it = 0; it < span.getSize(); it++)
		o << span.getValue(it) << ' ';
	return (o);
}

