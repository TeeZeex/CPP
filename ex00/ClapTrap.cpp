/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:40:23 by mac               #+#    #+#             */
/*   Updated: 2024/04/15 11:48:34 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	_name = "Default";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap Constructor Called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	_name = name;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}
ClapTrap::ClapTrap(ClapTrap const & clap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clap;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap ClapTrap::operator =(const ClapTrap& clap)
{
	_name = clap._name;
	_hitpoints = clap._hitpoints;
	_energyPoints = clap._energyPoints;
	_attackDamage = clap._attackDamage;
	return *this;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints = _hitpoints - amount;
	if(this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints =this->_energyPoints - 1;
	if(this->_energyPoints < 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	if(this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	this->_hitpoints = _hitpoints + amount;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	this->_energyPoints = this->_energyPoints - 1;
	if(this->_energyPoints < 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	if(this->_hitpoints < 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if(this->_attackDamage < 0)
	{
		std::cout << "ClapTrap " << _name << " has no attack damage!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::stats(ClapTrap& clap)
{
	std::cout << "Attack damage " << clap.getAttackDamage() << std::endl;
	std::cout << "Hitpoints " << clap.getHitpoints() << std::endl;
	std::cout << "Energy points " << clap.getEnergyPoints() << std::endl;
}
int ClapTrap::getHitpoints()
{
	return _hitpoints;
}
int ClapTrap::getEnergyPoints()
{
	return _energyPoints;
}
int ClapTrap::getAttackDamage()
{
	return this->_attackDamage;
}
