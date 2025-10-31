/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/31 10:52:22 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	std::cout << "\n === Initial Stats: === " << std::endl; 
	ClapTrap defaultHuman;
	ClapTrap Human("HumanA");
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
	
	std::cout << "\n === Initial Stats: ===" << std::endl;
	ScavTrap defaultRobot;
	ScavTrap Robot("RobotA");
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
	std::cout << "\n === Testing actions: ===" << std::endl;
	Human.attack("RobotA");
	Robot.takeDamage(4);
	Robot.beRepaired(3);
	Robot.attack("HumanA");
	Human.takeDamage(4);
	Human.beRepaired(3);
	
	std::cout << "\n === No points limit test: ===a" << std::endl;
	for (int i = 52; i > 0; i--)
	 	Robot.attack("Human B");

	std::cout << "\n=== Copying Initial Stats ===" << std::endl;
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
	std::cout << "\n===Testing copy constructor ===" << std::endl;
	ScavTrap RobotCopy(Robot);
	std::cout << "Copied Robot - Name: " << RobotCopy.getName() << std::endl;
	std::cout << "HP: " << RobotCopy.getHitPoints() << std::endl; 
	std::cout << "Energy: " << RobotCopy.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << RobotCopy.getAttackDamage() << std::endl;

	std::cout << "\n=== Testing assignment operator ===" << std::endl;
	ScavTrap RobotAssigned;
	RobotAssigned = Robot;
	std::cout << "Assigned Robot - Name: " << RobotAssigned.getName() << std::endl;
	std::cout << "HP: " << RobotAssigned.getHitPoints() << std::endl; 
	std::cout << "Energy: " << RobotAssigned.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << RobotAssigned.getAttackDamage() << std::endl;

	std::cout << "\n=== Testing death scenario ===" << std::endl;
	ScavTrap DieTest("DieTest");
	DieTest.takeDamage(150);
	DieTest.attack("Someone");
	DieTest.beRepaired(10);

	std::cout << "\n=== GuardGate ===" << std::endl;
	DieTest.guardGate();
	
	std::cout << "\n === ClapTrap Post Stats ===" << std::endl; 
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;

	std::cout << "\n === ScavTrap Post Stats ===" << std::endl;
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;	
}

// // ANSI color codes
// #define RED     "\033[31m"
// #define GREEN   "\033[32m"
// #define YELLOW  "\033[33m"
// #define BLUE    "\033[34m"
// #define MAGENTA "\033[35m"
// #define CYAN    "\033[36m"
// #define WHITE   "\033[37m"
// #define RESET   "\033[0m"
// #define BOLD    "\033[1m"

// int	main()
// {
// 	std::cout << BOLD << CYAN << "\n === Initial Stats: === " << RESET << std::endl; 
// 	ClapTrap defaultHuman;
// 	ClapTrap Human("HumanA");
// 	std::cout << GREEN << "Name: " << RESET << Human.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << Human.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << Human.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << Human.getAttackDamage() << std::endl;
	
// 	std::cout << BOLD << BLUE << "\n === Initial Stats: ===" << RESET << std::endl;
// 	ScavTrap defaultRobot;
// 	ScavTrap Robot("RobotA");
// 	std::cout << BLUE << "Name: " << RESET << Robot.getName() << std::endl;
// 	std::cout << BLUE << "HP: " << RESET << Robot.getHitPoints() << std::endl; 
// 	std::cout << BLUE << "Energy: " << RESET << Robot.getEnergyPoints() << std::endl;
// 	std::cout << BLUE << "Attack: " << RESET << Robot.getAttackDamage() << std::endl;
	
// 	std::cout << BOLD << YELLOW << "\n === Testing actions: ===" << RESET << std::endl;
// 	Human.attack("RobotA");
// 	Robot.takeDamage(4);
// 	Robot.beRepaired(3);
// 	Robot.attack("HumanA");
// 	Human.takeDamage(4);
// 	Human.beRepaired(3);
	
// 	std::cout << BOLD << MAGENTA << "\n === No points limit test: ===" << RESET << "a" << std::endl;
// 	for (int i = 52; i > 0; i--)
// 	 	Robot.attack("Human B");

// 	std::cout << BOLD << CYAN << "\n=== Copying Initial Stats ===" << RESET << std::endl;
// 	std::cout << BLUE << "Name: " << RESET << Robot.getName() << std::endl;
// 	std::cout << BLUE << "HP: " << RESET << Robot.getHitPoints() << std::endl; 
// 	std::cout << BLUE << "Energy: " << RESET << Robot.getEnergyPoints() << std::endl;
// 	std::cout << BLUE << "Attack: " << RESET << Robot.getAttackDamage() << std::endl;
	
// 	std::cout << BOLD << CYAN << "\n===Testing copy constructor ===" << RESET << std::endl;
// 	ScavTrap RobotCopy(Robot);
// 	std::cout << GREEN << "Copied Robot - Name: " << RESET << RobotCopy.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << RobotCopy.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << RobotCopy.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << RobotCopy.getAttackDamage() << std::endl;

// 	std::cout << BOLD << CYAN << "\n=== Testing assignment operator ===" << RESET << std::endl;
// 	ScavTrap RobotAssigned;
// 	RobotAssigned = Robot;
// 	std::cout << GREEN << "Assigned Robot - Name: " << RESET << RobotAssigned.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << RobotAssigned.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << RobotAssigned.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << RobotAssigned.getAttackDamage() << std::endl;

// 	std::cout << BOLD << RED << "\n=== Testing death scenario ===" << RESET << std::endl;
// 	ScavTrap DieTest("DieTest");
// 	DieTest.takeDamage(150);
// 	DieTest.attack("Someone");
// 	DieTest.beRepaired(10);
//
//	std::cout << BOLD << RED << "\n=== Testing death scenario ===" << RESET << std::endl;
// 	DieTest.guardGate();
	
// 	std::cout << BOLD << GREEN << "\n === ClapTrap Post Stats ===" << RESET << std::endl; 
// 	std::cout << GREEN << "Name: " << RESET << Human.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << Human.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << Human.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << Human.getAttackDamage() << std::endl;

// 	std::cout << BOLD << BLUE << "\n === ScavTrap Post Stats ===" << RESET << std::endl;
// 	std::cout << BLUE << "Name: " << RESET << Robot.getName() << std::endl;
// 	std::cout << BLUE << "HP: " << RESET << Robot.getHitPoints() << std::endl; 
// 	std::cout << BLUE << "Energy: " << RESET << Robot.getEnergyPoints() << std::endl;
// 	std::cout << BLUE << "Attack: " << RESET << Robot.getAttackDamage() << std::endl;	
// }