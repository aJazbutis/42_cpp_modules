/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:04:43 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/07/26 18:49:37 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <ctime>
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	Add(void);
		void	Search(void) const;	
		void	Show(void) const;
		time_t	GetTm(void) const;
	private:
		int				_i;
		std::string		_FirstName;
		std::string		_LastName;
		std::string		_NickName;
		std::string		_Number;
		std::string		_Secret;
		std::time_t		_t;
		void			InputError(void) const;
		void			ShortPrint(std::string str) const;
		static unsigned int	GetInsNb(void);
		static unsigned int	_nbr;
};
#endif
