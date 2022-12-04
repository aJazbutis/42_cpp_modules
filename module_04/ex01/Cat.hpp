/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:09:25 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 22:53:35 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : virtual public Animal	{
	private:
		Brain	*brain;
	public:
		Cat(void);
		virtual~Cat(void);
		Cat(Cat const &src);
		Cat		&operator=(Cat const & rhs);
		virtual void	makeSound(void) const;
		void	think(unsigned int i) const;
		Brain	*getBrain(void) const;
		bool	setIdea(unsigned int i, std::string const & ideaa);
};

#endif
