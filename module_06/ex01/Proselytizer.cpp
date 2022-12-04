/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Proselytizer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:48:35 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 18:35:10 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Proselytizer.hpp"

Data::Data(void):
	_arg("0"), _isNan(false), _char(0), _int(0), _float(0), _double(0)	{
	std::cout << "Default constructor" << std::endl;
}

Data::~Data(void)	{
//	std::cout << "Destructor" << std::endl;
}

Data::Data(char *str):
   	_arg(str), _isNan(false), _char(0), _int(0), _float(0), _double(0) 	{
//	std::cout << "Constructor with an argument" << std::endl;
	if (_arg.empty())
		throw (Data::NaughtyInputException());
}

Data::Data(Data const & src):
	_arg(src._arg), _char(src._char), _int(src._int),
	_float(src._float), _double(src._double)	{
	std::cout << "Data Clone(copy) contructor" << std::endl;
}

Data	&Data::operator=(Data const & rhs)	{
	if (this == &rhs)
		return (*this);
	this->_arg = rhs._arg;
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	return (*this);
}

std::string const & Data::getArg(void) const	{
	return (_arg);
}

char const *Data::NaughtyInputException::what() const throw()	{
	return ("Very naughty input!");
}

std::ostream	&operator<<(std::ostream & o, Data const & cnvrt)	{
	o << cnvrt.getArg();
	return (o);

}

int	Data::analyze(void)	{
	if (_arg == "-inf" || _arg == "+inf" || _arg == "nan" ||
			_arg == "-inff" || _arg == "+inff" || _arg == "nanf")	{
		_isNan = true;
		if (_arg == "-inf" || _arg == "+inf" || _arg == "nan") 
			return (DOUBLE);
		else
			return (FLOAT);
	}
	if (_arg.length() == 1 &&
			_arg.find_first_of("0123456789") == std::string::npos)	{
		return (CHAR);
	}
	if (_arg.find_first_not_of("+-0123456789") == std::string::npos)	{
		if ((_arg.front() == '+' || _arg.front() == '-') &&
		_arg.find_first_of("+-") == _arg.find_last_of("+-"))	{
		return (INT);
		}
		if (_arg.find_first_not_of("0123456789") == std::string::npos)
			return (INT);
	}
	if (_arg.find_first_not_of("+-0123456789.") == std::string::npos)	{
		if (_arg.find_first_of("+-") == _arg.find_last_of("+-") &&
		_arg.find_first_of(".") == _arg.find_last_of(".") &&
		(_arg.front() == '+' || _arg.front() == '-')) 	{
		return (DOUBLE);
		}
		if (_arg.find_first_of(".") == _arg.find_last_of(".") &&
			_arg.find_first_not_of("0123456789.") ==  std::string::npos)	{
		return (DOUBLE);
		}
	}
	if (_arg.find_first_not_of("+-0123456789.f") == std::string::npos)	{
		if (_arg.find_first_of("+-") == _arg.find_last_of("+-") &&
		_arg.find_first_of(".") == _arg.find_last_of(".") &&
		(_arg.front() == '+' || _arg.front() == '-') &&
		_arg.back() == 'f' && _arg.find_first_of("f") == _arg.find_last_of("f")){
		return (FLOAT);
		}
		if (_arg.find_first_of("f") == _arg.find_last_of("f") &&
		_arg.find_first_of(".") == _arg.find_last_of(".") &&
		_arg.back() == 'f' &&
		_arg.find_first_not_of("0123456789.f") ==  std::string::npos)	{
		return (FLOAT);
		}
	}
	throw (Data::NaughtyInputException());
	return (-1);
}

void	Data::fromChar(void)	{
	_char = static_cast<char>(_arg.front());
	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
	print();
}

void	Data::fromInt(void)	{
	try	{
		_int = std::stoi(_arg);
		_char = static_cast<char>(_int);
		_float = static_cast<float>(_int);
		_double = static_cast<double>(_int);
		print();
	}
	catch (std::exception & e)	{
		fromDouble();
	}
}

void	Data::fromFloat(void)	{
		_float = std::stof(_arg);
		_char = static_cast<char>(_float);
		_int = static_cast<int>(_float);
		_double = static_cast<double>(_float);
		print();
}

void	Data::fromDouble(void)	{
		_double = std::stod(_arg);
		_char = static_cast<char>(_double);
		_int = static_cast<int>(_double);
		_float = static_cast<float>(_double);
		print();
}

void	Data::print(void)	{
		std::cout << std::setprecision(10);
		std::cout << "char: ";
		if (_isNan || _double > std::numeric_limits<char>::max() ||
				_double < std::numeric_limits<char>::min())	
			std::cout << "impossible";
		else	{
			if (_char < 33 || _char > 126)
				std::cout << "Non printable";
			else
				std::cout << _char;
		}
		std::cout << std::endl;
		std::cout << "int: ";
		if (_isNan || _double > std::numeric_limits<int>::max() ||
				_double < std::numeric_limits<int>::min())
			std::cout << "impossible";
		else
			std::cout << _int;
		std::cout << std::endl;
		std::cout << "float: ";
		std::cout << _float;
		if (_float - _int)
			std::cout << 'f' << std::endl;
		else
			std::cout << ".0f" << std::endl;
		std::cout << "double: ";
		std::cout << _double;
		if (_double - _int == 0)
			std::cout << ".0";
		std::cout << std::endl;
}

void	Data::proselytize(void)	{
	int i = analyze();
	switch (i)	{
		case (CHAR):
			fromChar();
			break ;
		case (INT):
			fromInt();
			break ;
		case (FLOAT):
			fromFloat();
			break ;
		case (DOUBLE):
			fromDouble();
	}
}
