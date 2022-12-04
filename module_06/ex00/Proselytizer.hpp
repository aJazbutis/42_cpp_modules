/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Proselytizer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:33:17 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 17:26:28 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROSELYTIZER_HPP
#define PROSELYTIZER_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include <string>
# include <stdexcept>
# include <sstream>

class	Proselytizer	{
	private:
		std::string	_arg;
		bool		_isNan;
		char		_char;
		int			_int;
		float		_float;
		double		_double;
		enum		_type	{
			CHAR, INT, FLOAT, DOUBLE};
		void		fromChar(void);
		void		fromInt(void);
		void		fromFloat(void);
		void		fromDouble(void);
		int			analyze(void);
		void		print(void);
	public:
		Proselytizer(void);
		~Proselytizer(void);
		Proselytizer(char *str);
		Proselytizer(Proselytizer const & src);
		Proselytizer	&operator=(Proselytizer const & rhs);
		class	NaughtyInputException: public std::exception	{
			public:
				virtual const char * what() const throw();
		};
		std::string	const & getArg(void) const;
		void	proselytize(void);
};

std::ostream	&operator<<(std::ostream & o, Proselytizer const & cnvrt);

#endif
