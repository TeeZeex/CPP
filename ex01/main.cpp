/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:44:52 by mac               #+#    #+#             */
/*   Updated: 2024/04/13 17:00:18 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a("Robot");
	ScavTrap b("Scav");
	b.attack("Human");
	//b.stats(b);
	// a.takeDamage(0);
	// a.beRepaired(0);
	// a.stats(a);
	return(0);
}
