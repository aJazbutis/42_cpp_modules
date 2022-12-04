/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:33:47 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/19 22:12:38 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal	{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal			&operator=(WrongAnimal const & rhs);
		std::string		getType(void) const;
		void	makeSound(void) const;
};

#endif

