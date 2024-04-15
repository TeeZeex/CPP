/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:34:49 by mac               #+#    #+#             */
/*   Updated: 2024/04/15 11:50:50 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	private:

	public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap (const ScavTrap &scav);
	ScavTrap operator=(const ScavTrap &obj);
	void	guardGate();
	void	attack(const std::string& target);


};
#endif
