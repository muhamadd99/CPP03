/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:53:08 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/30 16:55:46 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	name = "Default";
	ClapTrap::_name = name + "_clap_trap";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

// DiamondTrap::DiamondTrap(std::string nameParam) : name(nameParam)
// {
// 	ClapTrap::_name = nameParam + "_clap_trap";
// 	_hitPoints = FragTrap::_hitPoints;
// 	_energyPoints = ScavTrap::_energyPoints;
// 	std::cout << "DiamondTrap" << _energyPoints << "ScavTrap:" << ScavTrap::_energyPoints << std::endl;
// 	_attackDamage = FragTrap::_attackDamage;
// 	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
// }

DiamondTrap::DiamondTrap(std::string nameParam) : name(nameParam)
{
    ClapTrap::_name = nameParam + "_clap_name";
    
    std::cout << "Before assignment - _energyPoints: " << _energyPoints << std::endl;
    std::cout << "ScavTrap::_energyPoints: " << ScavTrap::_energyPoints << std::endl;
    std::cout << "FragTrap::_energyPoints: " << FragTrap::_energyPoints << std::endl;
    
    _energyPoints = ScavTrap::_energyPoints;  // This is ALREADY 100!
    
    std::cout << "After assignment - _energyPoints: " << _energyPoints << std::endl;
}

//: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
DiamondTrap::DiamondTrap(const DiamondTrap& other) 
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		ClapTrap::_name = name + "_clap_trap";
		//ClapTrap::name = other.ClapTrap::name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hello my DiamondTrap Name is " << name << " I originated from ClapTrap Name: " << ClapTrap::_name <<  std::endl;
}

std::string	DiamondTrap::getName() const
{
	return (name);
}

std::string	DiamondTrap::getClapName() const
{
	return(ClapTrap::_name);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}