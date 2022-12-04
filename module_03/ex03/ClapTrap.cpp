/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 21:05:51 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 00:16:50 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("NoName"), _hitP(10), _energyP(10), _attackD(0)	{
	std::cout << "Default constructor called" << std::endl;
}	

ClapTrap::ClapTrap(std::string name): _name(name), _hitP(10), _energyP(10), _attackD(0)	{
	std::cout << "A constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src): _name(src.getName()), _hitP(src.getHitPoints()), _energyP(src.getEnergyPoints()), _attackD(src.getAttackDamage())	{
		std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)	{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)	{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	this->_energyP = rhs.getEnergyPoints();
	this->_hitP = rhs.getHitPoints();
	this->_attackD = rhs.getAttackDamage();
	return (*this);
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!

void	ClapTrap::attack(const std::string &target)	{
	if (!getHitPoints())	{
		std::cout << "ClapTrap ";
		std::cout << getName() << " is unconcious, so can't attack at this point";
		std::cout << std::endl;
		return ;
	}
	if (this->_energyP)	{
		std::cout << "ClapTrap " << this->_name << " attacks " <<  target;
		std::cout << " causing " << this->_attackD;
		std::cout << " points of damage!" << std::endl;
		this->_energyP--;
	}
	else	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " doesn't have enough energy to attack ";
		std::cout << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)	{
	if (this->_hitP)	{
		std::cout << this->_name << " takes " << amount;
		std::cout << " points of damage!";
		if (this->_hitP >= amount)	{
			this->_hitP -= amount;
			if (!this->_hitP)	{
				std::cout << " 😵‍💫" << std::endl;
				std::cout << this->_name << " is unconcious!" << std::endl;
			}
			else
				std::cout << std::endl; 
		}
		else	{
			this->_hitP = 0;
			std::cout << " 😵" << std::endl;
			std::cout << "**OVERKILL!!**" << std::endl;
			std::cout << this->_name << " is unconcious!" << std::endl;
		}
	}
	else	{
		std::cout << this->_name;
		std::cout << " is already unconcious!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)	{
	if (!getHitPoints())	{
		std::cout << getName() << " is unconcious, so can't repair itself at this point";
		std::cout << std::endl;
		return ;
	}
	if (this->_energyP)	{
		std::cout  << this->_name << " repairs itself for ";
		std::cout << amount;
		std::cout << " of points!" << std::endl;
		this->_energyP--;
		this->_hitP += amount;
	}
	else	{
		std::cout << this->_name;
		std::cout << " doesn't have enough energy to repair itself " << std::endl;
	}
}

std::string const	&ClapTrap::getName(void) const	{
	return (this->_name);
}

void	ClapTrap::setAttackDamage(unsigned int amount)	{
	this->_attackD = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)	{
	this->_energyP = amount;
}

void	ClapTrap::setHitPoints(unsigned int amount)	{
	this->_hitP = amount;
}

void	ClapTrap::setName(std::string name)	{
	this->_name = name;
}

unsigned int	ClapTrap::getHitPoints(void) const	{
	return (this->_hitP);
}

unsigned int	ClapTrap::getEnergyPoints(void) const	{
	return (this->_energyP);
}

unsigned int	ClapTrap::getAttackDamage(void) const	{
	return (this->_attackD);
}
