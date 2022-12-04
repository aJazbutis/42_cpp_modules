/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:34:24 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/25 01:07:59 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : virtual public Form 	{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		virtual~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const & src);
		virtual	void	execute(Bureaucrat const & executor) const ;
};

#endif
