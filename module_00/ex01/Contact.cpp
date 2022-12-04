/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:20:42 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/12/04 16:54:57 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
//	std::cout << "CREATION(Contact)!" << std::endl;
	Contact::_nbr++;
	this->_i = Contact::_nbr;
//	std::cout << Contact::GetInsNb() << std::endl;
	return ;
}

Contact::~Contact(void){
//	std::cout << "I WILL DESTROY YOU(Contact)!" << std::endl;
	Contact::_nbr--;
//	std::cout << Contact::GetInsNb() << std::endl;
	return ;
}

void	Contact::Add(void) {
	while (1)	{
		std::cout << "First name: "	<< std::endl;
		std::getline(std::cin, this->_FirstName);
		Contact::InputError();
		if (!this->_FirstName.empty())
			break ;
	}
	while (1)	{
	std::cout << "Last name: " << std::endl;
	std::getline(std::cin, this->_LastName);
	Contact::InputError();
	if (!this->_LastName.empty())
		break ;
	}
	while (1)	{
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, this->_NickName);
	Contact::InputError();
	if (!this->_NickName.empty())
		break ;
	}
	while (1)	{
	std::cout << "Phone number: " << std::endl;
	std::getline(std::cin, this->_Number);
	Contact::InputError();
	if (!this->_Number.empty())
		break ;
	}
	while (1)	{
	std::cout << "The darkest secret: " << std::endl;
	std::getline(std::cin, this->_Secret);
	Contact::InputError();
	if (!this->_Secret.empty())
		break ;
	}
	this->_t = std::time(0);
	std::cout << "New contact saved!" << std::endl;
	return ;
}

time_t	Contact::GetTm(void) const {
	return (this->_t);
}

void	Contact::ShortPrint(std::string str) const {
	if (str.length() > 10)
		std::cout << std::setw(10) << std::right << str.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << std::right << str << '|';
	return ;
}

void	Contact::Search(void) const {
	std::cout << std::setw(10) << std::right <<  this->_i << '|';
	Contact::ShortPrint(this->_FirstName);
	Contact::ShortPrint(this->_LastName);
	Contact::ShortPrint(this->_NickName);
	std::cout << std::endl;
	return ;
}

void	Contact::Show(void) const {
	std::cout << std::setw(20) << std::left << "First name: ";
	std::cout << this->_FirstName << std::endl;
	std::cout << std::setw(20) << std::left << "Last name: ";
	std::cout << this->_LastName << std::endl;
	std::cout << std::setw(20) << std::left << "Nickname: ";
	std::cout << this->_NickName << std::endl;
	std::cout << std::setw(20) << std::left << "Phone number: ";
	std::cout << this->_Number << std::endl;
	std::cout << std::setw(20) << std::left << "The darkest secret: ";
	std::cout << this->_Secret << std::endl;
}

void	Contact::InputError(void) const {
	if (!std::cin.good())
	{
		std::cout << "Something unexpected happened. Exiting now" << std::endl;
		exit(1);
	}
}

unsigned int Contact::GetInsNb(void){
	return (Contact::_nbr);
}

unsigned int Contact::_nbr = 0;
