/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:37:39 by mac               #+#    #+#             */
/*   Updated: 2024/04/15 11:51:25 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap ScavTrap::operator=(const ScavTrap& obj)
{
	_name = obj._name;
	_hitpoints = obj._hitpoints;
	_energyPoints = obj._energyPoints;
	_attackDamage = obj._attackDamage;
	return *this;
}

ScavTrap::ScavTrap (const ScavTrap &scav)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scav;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
void ScavTrap::attack(const std::string& target)
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
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}




