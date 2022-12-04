/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temlate_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:28:49 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/28 15:40:43 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class	List	{
	public:
		List<T>(T const & content);
		List<T>(List<T> const & list);
		~List<T>(void);
	private:
		T		*_content;
		List<T> *_next;
};
