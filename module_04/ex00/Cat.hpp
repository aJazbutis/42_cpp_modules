/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:09:25 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:44:28 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal	{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const &src);
		Cat		&operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
};

#endif
