/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:19:29 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 20:21:01 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
#define SHRUBBERRYCREATIONFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	ShrubberryCreationForm : virtual public Form 	{
	private:
		std::string	_target;
	public:
		ShrubberryCreationForm(void);
		virtual~ShrubberryCreationForm(void);
		ShrubberryCreationForm(std::string target);
		ShrubberryCreationForm(ShrubberryCreationForm const & src);
		ShrubberryCreationForm	&operator=(ShrubberryCreationForm const & src);
		virtual	void	execute(Bureaucrat const & executor) const ;
};

#endif
