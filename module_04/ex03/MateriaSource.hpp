/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:45:30 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/21 23:19:21 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: virtual public IMateriaSource	{
	private:
		AMateria	**templates;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		MateriaSource &operator=(MateriaSource const & rhs);
		virtual ~MateriaSource();
		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const & type);
};

#endif
