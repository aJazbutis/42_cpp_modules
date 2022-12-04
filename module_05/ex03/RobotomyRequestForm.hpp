/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:46:56 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 18:47:07 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	RobotomyRequestForm : virtual public Form 	{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		virtual~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const & src);
		virtual	void	execute(Bureaucrat const & executor) const ;
};

#endif
