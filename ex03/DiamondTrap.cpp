/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:53:08 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/31 10:28:36 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), ScavTrap(),
			FragTrap(), name("Unnamed")
{
	_hitPoints = FragTrap::_HP;
	_energyPoints = ScavTrap::_EP;
	_attackDamage = FragTrap::_AD;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string nameParam) : ClapTrap(nameParam + "_clap_name"),
			ScavTrap(), FragTrap(), name(nameParam) 
{
    ClapTrap::_name = nameParam + "_clap_name"; 
	_hitPoints = FragTrap::_HP;
	_energyPoints = ScavTrap::_EP;
	_attackDamage = FragTrap::_AD;
    std::cout << "DiamondTrap parameterized constructor called" << _energyPoints << std::endl;
}

//: ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		ClapTrap::_name = name + "_clap_name";
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