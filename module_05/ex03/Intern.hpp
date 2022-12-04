/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:48:31 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/24 23:13:43 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern	{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const & src);
		Intern &operator=(Intern const & rhs);
		Form	*makeForm(std::string formName, std::string target);
};

#endif
