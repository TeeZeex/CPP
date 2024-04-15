/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:55:26 by mac               #+#    #+#             */
/*   Updated: 2024/04/15 11:51:52 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	private:

	public:
	FlagTrap();
	FlagTrap(std::string name);
	FlagTrap (const FlagTrap &flag);
	FlagTrap operator=(const FlagTrap &obj);
	~FlagTrap();

	void	highFivesGuys();
};
#endif
