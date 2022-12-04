/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:26:41 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/17 15:23:20 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()	{
	std::cout << "Default FragTrap constructor called" << std::endl;
	_name = "NameLess";
	_hitP = 100;
	_energyP = 100;
	_attackD = 30;
	//privat
//	setHitPoints(100);
//	setEnergyPoints(100);
//	setAttackDamage(30);
}	

FragTrap::FragTrap(std::string name): ClapTrap(name)	{
	std::cout << "A FragTrap constructor called" << std::endl;
	_hitP = 100;
	_energyP = 100;
	_attackD = 30;
	//privat
//	setHitPoints(100);
//	setEnergyPoints(100);
//	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &src)	{
	std::cout << "Copy FragTrap Constructor called" << std::endl;
	_name = src._name;
	_hitP = src._hitP;
	_energyP = src._energyP;
	_attackD = src._attackD;
	//privat
//	setName(src.getName());;
//	setHitPoints(src.getHitPoints());
//	setEnergyPoints(src.getEnergyPoints());
//	setAttackDamage(src.getAttackDamage());
}

FragTrap::~FragTrap(void)	{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)	{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_hitP = rhs._hitP;
	_energyP = rhs._energyP;
	_attackD = rhs._attackD;
	//privat
//	setName(rhs.getName());;
//	setHitPoints(rhs.getHitPoints());
//	setEnergyPoints(rhs.getEnergyPoints());
//	setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void	FragTrap::highFiveGuys(void) const	{
	if (!_hitP)	{
		std::cout << _name << " is unconcious, so can't ask for a high five..";
		std::cout << std::endl;
		return ;
	}
	if (!_energyP)	{
		std::cout << _name << " doesn't have energy to high five..";
		std::cout << std::endl;
		return ;
	}
	std::cout << _name << ": ✋\"High five guys!!\" 🙌"; //✋
	std::cout << std::endl;
}
std::ostream    &operator<<(std::ostream & o, FragTrap const & src)  {
	o << src.getName() << ": Hp: " << src.getHitPoints() << " Energy: ";
	o << src.getEnergyPoints() << " Attack: " << src.getAttackDamage();
	return (o);
}

/*void	FragTrap::highFiveGuys(void) const	{
	if (!getEnergyPoints())	{
		std::cout << getName() << " doesn't have energy to high five..";
		std::cout << std::endl;
		return ;
	}
	if (!getHitPoints())	{
		std::cout << getName() << " is unconcious, so can't ask for a high five..";
		std::cout << std::endl;
		return ;
	}
	std::cout << getName() << ": ✋\"High five guys!!\" 🙌"; //✋
	std::cout << std::endl;
}*/

/*void	FragTrap::attack(const std::string &target)	{
	if (!getHitPoints())	{
		std::cout << getName() << " is unconcious, so can't attack at this point";
		std::cout << std::endl;
		return ;
	}
	if (getEnergyPoints())	{
		std::cout << getName() << " attacks " <<  target;
		std::cout << " causing " << getAttackDamage();
		std::cout << " points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	else	{
		std::cout << getName();
		std::cout << " doesn't have enough energy to attack ";
		std::cout << target << std::endl;
	}
}*/
