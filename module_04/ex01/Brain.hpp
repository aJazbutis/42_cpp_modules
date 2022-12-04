/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:49:26 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/18 20:22:19 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class	Brain	{

	private:
	 	std::string	ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const & src);
		Brain &operator=(Brain const & rhs);
		std::string	getIdea(unsigned int i) const;
		bool		setIdea(unsigned int i, std::string const & idea);
};

#endif
