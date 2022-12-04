/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:00:14 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 15:23:59 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()	{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_name = "UnNamed";
	_hitP = 100;
	_energyP = 50;
	_attackD = 20;
	//if private
//	setHitPoints(100);
//	setEnergyPoints(50);
//	setAttackDamage(20);
}	

ScavTrap::ScavTrap(std::string name): ClapTrap(name)	{
	std::cout << "A ScavTrap constructor called" << std::endl;
	_hitP = 100;
	_energyP = 50;
	_attackD = 20;
	//	if private
//	setHitPoints(100);
//	setEnergyPoints(50);
//	setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &src)	{
	std::cout << "Copy ScavTrap Constructor called" << std::endl;
	_name = src._name;
	_hitP = src._hitP;
	_energyP = src._energyP;
	_attackD = src._attackD;
	//	if private
//	setName(src.getName());;
//	setHitPoints(src.getHitPoints());
//	setEnergyPoints(src.getEnergyPoints());
//	setAttackDamage(src.getAttackDamage());
}

ScavTrap::~ScavTrap(void)	{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)	{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_hitP = rhs._hitP;
	_energyP = rhs._energyP;
	_attackD = rhs._attackD;
//if private
//	setName(rhs.getName());;
//	setHitPoints(rhs.getHitPoints());
//	setEnergyPoints(rhs.getEnergyPoints());
//	setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void	ScavTrap::attack(const std::string &target)	{
	if (!_hitP)	{
		std::cout << _name << " is unconcious, ";
		std::cout << "so can't scavengerously attack at this point";
		std::cout << std::endl;
		return ;
	}
	if (_energyP)	{
		std::cout << _name << " scavengerously attacks " <<  target;
		std::cout << " causing " << _attackD;
		std::cout << " points of damage!" << std::endl;
		_energyP -= 1;
	}
	else	{
		std::cout << _name;
		std::cout << " doesn't have enough energy to scavengerously attack ";
		std::cout << target << std::endl;
	}
}

void	ScavTrap::guardGate(void) const	{
	if (!this->_hitP)	{
		std::cout << _name << " is unconcious, ";
		std::cout << "so can't switch to Gate keeper mode!";
		std::cout << std::endl;
		return ;
	}
	if (_energyP)	{
		std::cout << this->_name << " is now in Gate keeper mode!";
		std::cout << std::endl;
	}
	else	{
		std::cout << this->_name << " doesn't have enough energy ";
		std::cout << "points to switch to Gate keeper mode!";
		std::cout << std::endl;
	}
}

std::ostream    &operator<<(std::ostream & o, ScavTrap const & src)  {
	o << src.getName() << ": Hp: " << src.getHitPoints() << " Energy: ";
	o << src.getEnergyPoints() << " Attack: " << src.getAttackDamage();
	return (o);
}

/* private
void	ScavTrap::attack(const std::string &target)	{
	if (!getHitPoints())	{
		std::cout << getName() << " is unconcious, ";
		std::cout << "so can't scavengerously attack at this point";
		std::cout << std::endl;
		return ;
	}
	if (getEnergyPoints())	{
		std::cout << getName() << " scavengerously attacks " <<  target;
		std::cout << " causing " << getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else	{
		std::cout << getName();
		std::cout << " doesn't have enough energy to scavengerously attack ";
		std::cout << target << std::endl;
	}
}

void	ScavTrap::guardGate(void) const	{
	if (this->getHitPoints())	{
		std::cout << this->getName() << " is now in Gate keeper mode";
		std::cout << std::endl;
	}
	else	{
		std::cout << this->getName() << " doesn't have enough hit ";
		std::cout << "points to switch to Gate keeper mode";
		std::cout << std::endl;
	}
}


*/
