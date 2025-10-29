/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:16:12 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/29 11:28:56 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

// Color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"
 
class ClapTrap{
private:
std::string		_name;
unsigned int	_hitPoints;
unsigned int	_energyPoints;
unsigned int	_attackDamage;

public:
ClapTrap();
ClapTrap(const std::string& name);
ClapTrap(const ClapTrap& other); //copy constructor
ClapTrap& operator=(const ClapTrap& other); //copy assignment operator constructor
~ClapTrap();
//member functions
void	attack(const std::string& target);
void	takeDamage(unsigned int amount);
void	beRepaired(unsigned int amount);
//getters
const std::string&	getName() const;
unsigned int		getHitPoints() const;
unsigned int		getEnergyPoints() const;
unsigned int		getAttackDamage() const;
};

#endif