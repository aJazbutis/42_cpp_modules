/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:35:22 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/07/26 16:57:31 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	if (argc < 2)
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
	else{
		while (*(++argv)){
			while (**argv){
				std::cout << (char)toupper(**argv);
				(*argv)++;
			}
			std::cout << std::endl;
		}
	}
	return (0);
}
