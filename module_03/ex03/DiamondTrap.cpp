/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:22:35 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 17:01:40 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("_clap_name"), _name("NoName")	{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = "_clap_name";
	_hitP = FragTrap::getHitPoints();
	_energyP = ScavTrap::getEnergyPoints();
	_attackD = FragTrap::getAttackDamage();
//	isetHitPoints(FragTrap::getHitPoints());
//	setEnergyPoints(FragTrap::getEnergyPoints());
//	setAttackDamage(FragTrap::getAttackDamage());
}	

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")	{
	std::cout << "A DiamondTrap constructor called" << std::endl;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitP = FragTrap::getHitPoints();
	_energyP = ScavTrap::getEnergyPoints();
	_attackD = FragTrap::getAttackDamage();
//	setHitPoints(FragTrap::getHitPoints());
//	setEnergyPoints(ScavTrap::getEnergyPoints());
//	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)	{
	std::cout << "Copy DiamondTrap Constructor called" << std::endl;
	ClapTrap::_name = src.ClapTrap::_name;
	_name = src.getName();
	_hitP = src._hitP;
	_energyP = src._energyP;
	_attackD = src._attackD;
}

DiamondTrap::~DiamondTrap(void)	{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)	{
	if (this == &rhs)
		return (*this);
	ClapTrap::_name = rhs.ClapTrap::_name; 
	_name = rhs.getName();
	_hitP = rhs._hitP;
	_energyP = rhs._energyP;
	_attackD = rhs._attackD;
	return (*this);
}

/*void	DiamondTrap::attack(const std::string &target)	{
	DiamondTrap::ScavTrap::attack(target);
}*/

void	DiamondTrap::whoAmI(void) const	{
	std::cout << "I AM " << this->_name << " , the " << ClapTrap::_name;
	std::cout << "!" << std::endl;
}

std::ostream	&operator<<(std::ostream & o, DiamondTrap const & src)	{
	o << src.getName() << ": Hp: " << src.getHitPoints() << " Energy: ";
	o  << src.ClapTrap::getEnergyPoints() << " Attack: " << src.getAttackDamage();
	return (o);
}

std::string	DiamondTrap::getName(void) const	{
	return (this->_name);
}

void	DiamondTrap::setName(std::string name)	{
	this->_name = name;
}
