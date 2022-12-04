/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:18:50 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 20:57:07 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class	Array	{
	private:
		unsigned int	_size;
		T				*_a;
	public:
		Array(void): _size(0)	{
			std::cout << "Default construct" << std::endl;
			_a = new T();
		};
		~Array(void)	{
			std::cout << "Destruct" << std::endl;
			delete [] _a ;
		}
		Array(Array const & src): _size(src._size)	{
			std::cout << "Copy construct" << std::endl;
			this->_a = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->_a[i] = src._a[i];
		};
		Array(unsigned int n): _size(n)	{
			std::cout << "Construct with " << _size <<std::endl;
			_a = new T[_size];
		};
		Array	&operator=(Array const & rhs)	{
			if (this == &rhs)
				return (*this);
			this->_size = rhs._size;
			for (unsigned int i = 0; i < _size; i++)
				this->_a[i] = rhs._a[i];
			return (*this);
		};
		T	&operator[](unsigned int i)	{
			if (i >= _size || i < 0)
				throw (std::out_of_range("out_of_range"));
			return (this->_a[i]);
		}
		unsigned int const & size(void) const	{
			return (this->_size);
		};
};

#endif
