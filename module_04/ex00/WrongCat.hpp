/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:38:03 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/18 15:43:10 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal	{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat		&operator=(WrongCat const & rhs);
		void		makeSound(void) const;
};

#endif

