/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:56:01 by mac               #+#    #+#             */
/*   Updated: 2024/04/15 11:51:45 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "FlagTrap Constructor Called" << std::endl;
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FlagTrap::FlagTrap (const FlagTrap &flag)
{
	std::cout << "FlagTrap Copy Constructor Called" << std::endl;
	*this = flag;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FlagTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FlagTrap FlagTrap ::operator =(const FlagTrap& flag)
{
	this->_name = flag._name;
	this->_hitpoints = flag._hitpoints;
	this->_energyPoints = flag._energyPoints;
	this->_attackDamage = flag._attackDamage;
	return *this;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap Deconstructor Called" << std::endl;
}

void FlagTrap::highFivesGuys()
{
	std::cout << "FlagTrap " <<  this->_name << " Give fives guys" << std::endl;
}
