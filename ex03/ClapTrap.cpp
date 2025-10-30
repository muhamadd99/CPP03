/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:15:36 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/30 00:24:14 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parameterized constructor called for " << _name <<  std::endl;	
}

//if i want to change way of implementation i do this
//: _name(other._name), _hitPoints(other._hitPoint), _energyPoints(other._energyPoints), _attackDamage(other.attackDamage)
ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
					<< ", causing " << _attackDamage << " points of damage!"
					<< std::endl;
		--_energyPoints;
	}
	else
		std::cout << "ClapTrap " << _name << " has no Energy Points/Hit Points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;

	std::cout << "ClapTrap " << _name << " takes " << amount 
				<< " damage! Current Hit Points: " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " heals " << amount
					<< " Hit Points. Current Hit Points: " <<  _hitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't repair itself!" << std::endl;
}

const std::string& ClapTrap::getName() const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

unsigned int 	ClapTrap::getEnergyPoints() const
{
	return(_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}