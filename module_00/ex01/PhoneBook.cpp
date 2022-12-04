/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 23:47:45 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/12/04 16:46:38 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
//	std::cout << "CREATION(PhoneBook)!" << std::endl;
	this->_i = 0;
	return ;
}

PhoneBook::~PhoneBook(void){
//	std::cout << "I WILL DESTROY YOU(PhoneBook)!" << std::endl;
	return ;
}

int	PhoneBook::Stored(void) const{
	return (PhoneBook::_i);
}

int	PhoneBook::PickOldst(void) const {
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (++j < 8) {
		if (_contact[i].GetTm() > _contact[j].GetTm())
			i = j;
	}
	return (i);
}


void	PhoneBook::Add(void){
	int	i;

	i = this->Stored();
	if (i < 8)
	{
		_contact[i].Add();
		this->_i++;
	}
	else {
		std::cout << "ADD: memory full, replacing the oldest record." << std::endl;
		i = PhoneBook::PickOldst();
		_contact[i].Add();
	}
	return ;
}

void	PhoneBook::InputError(void) const {
	if (!std::cin.good()) {
		std::cout << "Something unexpected happened. Exiting now." << std::endl;
		exit(1);
	}
}

void	PhoneBook::PrintHeader(void) const {
	std::cout << std::setw(10) << std::right << "Index" << '|';
	std::cout << std::setw(10) << std::right << "Name" << '|';
	std::cout << std::setw(10) << std::right << "Surname" << '|';
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
}

void	PhoneBook::Search(void) const {
	int				i;
	std::string	input;

	i = -1;
	if (!this->_i){
		std::cout << "SEARCH: no contacts added yet." << std::endl;
		return ;
	}
	PhoneBook::PrintHeader();
	while (++i < this->_i)
		_contact[i].Search();
	std::cout << "SEARCH: enter an index:" << std::endl;
	std::getline(std::cin, input);
	PhoneBook::InputError();
	i = input.length();
	if (i > 1)
		std::cout << "SEARCH: no entry found." << std::endl;
	else{
		i = input[0] - '0';
		if (i < 1 || i > this->_i)
			std::cout << "SEARCH: no entry found." << std::endl;
		else
			_contact[i - 1].Show();
	}
	return ;
}
