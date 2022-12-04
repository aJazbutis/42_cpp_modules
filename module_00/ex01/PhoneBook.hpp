/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:37:47 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/07/26 18:47:07 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <string>
# include <cstring>

class	PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	Add(void);
		void	Search(void) const;
	private:
		int		_i;
		Contact	_contact[8];
		void	PrintHeader(void) const;
		void	InputError(void) const;
		int		Stored(void) const;	
		int		PickOldst(void) const;
};
#endif
