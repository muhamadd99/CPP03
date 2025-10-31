/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/31 10:06:29 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main()
{	
	std::cout << " === Initial Stats: ===" << std::endl;
	ScavTrap defaultRobot;
	ScavTrap Robot("RobotA");
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
	std::cout << " \n=== Initial Stats === " << std::endl;
	FragTrap defaultDoll;
	FragTrap Doll("DollA");
	std::cout << "Name: " << Doll.getName() << std::endl;
	std::cout << "HP: " << Doll.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Doll.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Doll.getAttackDamage() << std::endl;
	
	std::cout << "\n=== Testing actions ===" << std::endl;
	Robot.takeDamage(4);
	Robot.beRepaired(3);
	Robot.attack("HumanA");
	Doll.attack("HumanA");
	Robot.attack("DollA");
	Doll.takeDamage(4);
	Doll.beRepaired(3);
	
	std::cout << "\n=== No points limit test ===" << std::endl;
	for (int i = 105; i > 0; i--)
	 	Doll.attack("Human B");

	std::cout << "\n=== Copying Initial Stats ===" << std::endl;
	std::cout << "Name: " << Doll.getName() << std::endl;
	std::cout << "HP: " << Doll.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Doll.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Doll.getAttackDamage() << std::endl;
	
	std::cout << "\n===Testing copy constructor ===" << std::endl;
	FragTrap DollCopy(Doll);
	std::cout << "Copied Doll - Name: " << DollCopy.getName() << std::endl;
	std::cout << "HP: " << DollCopy.getHitPoints() << std::endl; 
	std::cout << "Energy: " << DollCopy.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << DollCopy.getAttackDamage() << std::endl;

	std::cout << "\n=== Testing assignment operator ===" << std::endl;
	FragTrap DollAssigned;
	DollAssigned = Doll;
	std::cout << "Assigned Doll - Name: " << DollAssigned.getName() << std::endl;
	std::cout << "HP: " << DollAssigned.getHitPoints() << std::endl; 
	std::cout << "Energy: " << DollAssigned.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << DollAssigned.getAttackDamage() << std::endl;
				
	std::cout << "\n=== Testing death scenario ===" << std::endl;
	FragTrap DieDoll("DieDollTest");
	DieDoll.takeDamage(150);
	DieDoll.attack("Someone");
	DieDoll.beRepaired(100);
	std::cout << "\n=== High Five ===" << std::endl;
	DieDoll.highFiveGuys();
	
	std::cout << "\n === ClapTrap Post Stats: ===" << std::endl; 
	std::cout << "Name: " << Doll.getName() << std::endl;
	std::cout << "HP: " << Doll.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Doll.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Doll.getAttackDamage() << std::endl;
}

// ANSI color codes
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
// 	std::cout << BOLD << BLUE << " 🤖 === Initial ScavTrap Stats: ===" << RESET << std::endl;
// 	ScavTrap defaultRobot;
// 	ScavTrap Robot("RobotA");
// 	std::cout << BLUE << "Name: " << RESET << Robot.getName() << std::endl;
// 	std::cout << BLUE << "HP: " << RESET << Robot.getHitPoints() << std::endl; 
// 	std::cout << BLUE << "Energy: " << RESET << Robot.getEnergyPoints() << std::endl;
// 	std::cout << BLUE << "Attack: " << RESET << Robot.getAttackDamage() << std::endl;
	
// 	FragTrap defaultDoll;
// 	FragTrap Doll("DollA");
// 	std::cout << BOLD << MAGENTA << " \n 🧸 === Initial FragTrap Stats ===" << RESET << std::endl;
// 	std::cout << MAGENTA << "Name: " << RESET << Doll.getName() << std::endl;
// 	std::cout << MAGENTA << "HP: " << RESET << Doll.getHitPoints() << std::endl; 
// 	std::cout << MAGENTA << "Energy: " << RESET << Doll.getEnergyPoints() << std::endl;
// 	std::cout << MAGENTA << "Attack: " << RESET << Doll.getAttackDamage() << std::endl;
	
// 	std::cout << BOLD << YELLOW << "\n ⚔️ === Testing Actions ===" << RESET << std::endl;
// 	Robot.takeDamage(4);
// 	Robot.beRepaired(3);
// 	Robot.attack("HumanA");
// 	Doll.attack("HumanA");
// 	Robot.attack("DollA");
// 	Doll.takeDamage(4);
// 	Doll.beRepaired(3);
	
// 	std::cout << BOLD << RED << "\n 🔥 === No Points Limit Test ===" << RESET << std::endl;
// 	for (int i = 105; i > 0; i--)
// 	 	Doll.attack("Human B");

// 	std::cout << BOLD << CYAN << "\n 📊 === Copying Initial Stats ===" << RESET << std::endl;
// 	std::cout << MAGENTA << "Name: " << RESET << Doll.getName() << std::endl;
// 	std::cout << MAGENTA << "HP: " << RESET << Doll.getHitPoints() << std::endl; 
// 	std::cout << MAGENTA << "Energy: " << RESET << Doll.getEnergyPoints() << std::endl;
// 	std::cout << MAGENTA << "Attack: " << RESET << Doll.getAttackDamage() << std::endl;
	
// 	std::cout << BOLD << CYAN << "\n 🧬 === Testing Copy Constructor ===" << RESET << std::endl;
// 	FragTrap DollCopy(Doll);
// 	std::cout << GREEN << "Copied Doll - Name: " << RESET << DollCopy.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << DollCopy.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << DollCopy.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << DollCopy.getAttackDamage() << std::endl;

// 	std::cout << BOLD << CYAN << "\n 📝 === Testing Assignment Operator ===" << RESET << std::endl;
// 	FragTrap DollAssigned;
// 	DollAssigned = Doll;
// 	std::cout << GREEN << "Assigned Doll - Name: " << RESET << DollAssigned.getName() << std::endl;
// 	std::cout << GREEN << "HP: " << RESET << DollAssigned.getHitPoints() << std::endl; 
// 	std::cout << GREEN << "Energy: " << RESET << DollAssigned.getEnergyPoints() << std::endl;
// 	std::cout << GREEN << "Attack: " << RESET << DollAssigned.getAttackDamage() << std::endl;
				
// 	std::cout << BOLD << RED << "\n 💀 === Testing Death Scenario ===" << RESET << std::endl;
// 	FragTrap DieDoll("DieDollTest");
// 	DieDoll.takeDamage(150);
// 	DieDoll.attack("Someone");
// 	DieDoll.beRepaired(100);
	
// 	std::cout << BOLD << GREEN << "\n ✋ === High Five ===" << RESET << std::endl;
// 	DieDoll.highFiveGuys();
	
// 	std::cout << BOLD << MAGENTA << "\n 📈 === Final FragTrap Stats: ===" << RESET << std::endl; 
// 	std::cout << MAGENTA << "Name: " << RESET << Doll.getName() << std::endl;
// 	std::cout << MAGENTA << "HP: " << RESET << Doll.getHitPoints() << std::endl; 
// 	std::cout << MAGENTA << "Energy: " << RESET << Doll.getEnergyPoints() << std::endl;
// 	std::cout << MAGENTA << "Attack: " << RESET << Doll.getAttackDamage() << std::endl;
// }