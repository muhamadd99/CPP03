/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/30 23:21:27 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

// int	main()
// {	
// 	DiamondTrap defaultPeople;
// 	DiamondTrap People("PeopleA");
// 	std::cout << "Initial Stats: " << std::endl;
// 	std::cout << "Name: " << People.getName() << std::endl;
// 	std::cout << "ClapName: " << People.getClapName() << std::endl;
// 	std::cout << "HP: " << People.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << People.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << People.getAttackDamage() << std::endl;
	
// 	std::cout << "\n=====Testing actions:=====" << std::endl;
// 	People.takeDamage(4);
// 	People.attack("RobotA");
// 	People.beRepaired(50);

// 	std::cout << "\n===Testing copy constructor ===" << std::endl;
// 	DiamondTrap PeopleCopy(People);
// 	std::cout << "Copied People - Name: " << PeopleCopy.getName() << std::endl;
// 	std::cout << "ClapName: " << PeopleCopy.getClapName() << std::endl;
// 	std::cout << "HP: " << PeopleCopy.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << PeopleCopy.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << PeopleCopy.getAttackDamage() << std::endl;

// 	std::cout << "\n=== Testing assignment operator ===" << std::endl;
// 	DiamondTrap PeopleAssigned;
// 	PeopleAssigned = People;
// 	std::cout << "Assigned People - Name: " << PeopleAssigned.getName() << std::endl;
// 	std::cout << "ClapName: " << PeopleAssigned.getClapName() << std::endl;
// 	std::cout << "HP: " << PeopleAssigned.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << PeopleAssigned.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << PeopleAssigned.getAttackDamage() << std::endl;
				
// 	std::cout << "\n=== Testing Special Features ===" << std::endl;
// 	People.whoAmI();
	
// 	std::cout << "\n=== Testing death scenario ===" << std::endl;
// 	People.takeDamage(1000);
// 	People.beRepaired(50);

// }

// Color codes for terminal output
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define RESET   "\033[0m"
#define BOLD    "\033[1m"

int	main()
{	
	std::cout << BOLD << MAGENTA << "\n💎 === CREATING DIAMONDTRAPS === 💎" << RESET << std::endl;
	DiamondTrap defaultPeople;
	DiamondTrap People("PeopleA");
	
	std::cout << BOLD << CYAN << "\n📊 === INITIAL STATS ===" << RESET << std::endl;
	std::cout << YELLOW << "✨ Name: " << WHITE << People.getName() << RESET << std::endl;
	std::cout << YELLOW << "🏷️  ClapName: " << WHITE << People.getClapName() << RESET << std::endl;
	std::cout << RED << "❤️  HP: " << WHITE << People.getHitPoints() << "/100" << RESET << std::endl; 
	std::cout << BLUE << "⚡ Energy: " << WHITE << People.getEnergyPoints() << "/50" << RESET << std::endl;
	std::cout << MAGENTA << "💥 Attack: " << WHITE << People.getAttackDamage() << RESET << std::endl;
	
	std::cout << BOLD << GREEN << "\n🎯 === TESTING ACTIONS ===" << RESET << std::endl;
	std::cout << RED << "➖ People takes 4 damage..." << RESET << std::endl;
	People.takeDamage(4);
	std::cout << MAGENTA << "🎯 People attacks RobotA..." << RESET << std::endl;
	People.attack("RobotA");
	std::cout << GREEN << "➕ People repairs 50 HP..." << RESET << std::endl;
	People.beRepaired(50);

	std::cout << BOLD << YELLOW << "\n📋 === TESTING COPY CONSTRUCTOR ===" << RESET << std::endl;
	DiamondTrap PeopleCopy(People);
	std::cout << CYAN << "📸 Copied People:" << RESET << std::endl;
	std::cout << "  " << YELLOW << "✨ Name: " << WHITE << PeopleCopy.getName() << RESET << std::endl;
	std::cout << "  " << YELLOW << "🏷️  ClapName: " << WHITE << PeopleCopy.getClapName() << RESET << std::endl;
	std::cout << "  " << RED << "❤️  HP: " << WHITE << PeopleCopy.getHitPoints() << RESET << std::endl; 
	std::cout << "  " << BLUE << "⚡ Energy: " << WHITE << PeopleCopy.getEnergyPoints() << RESET << std::endl;
	std::cout << "  " << MAGENTA << "💥 Attack: " << WHITE << PeopleCopy.getAttackDamage() << RESET << std::endl;

	std::cout << BOLD << BLUE << "\n🔄 === TESTING ASSIGNMENT OPERATOR ===" << RESET << std::endl;
	DiamondTrap PeopleAssigned;
	PeopleAssigned = People;
	std::cout << CYAN << "📝 Assigned People:" << RESET << std::endl;
	std::cout << "  " << YELLOW << "✨ Name: " << WHITE << PeopleAssigned.getName() << RESET << std::endl;
	std::cout << "  " << YELLOW << "🏷️  ClapName: " << WHITE << PeopleAssigned.getClapName() << RESET << std::endl;
	std::cout << "  " << RED << "❤️  HP: " << WHITE << PeopleAssigned.getHitPoints() << RESET << std::endl; 
	std::cout << "  " << BLUE << "⚡ Energy: " << WHITE << PeopleAssigned.getEnergyPoints() << RESET << std::endl;
	std::cout << "  " << MAGENTA << "💥 Attack: " << WHITE << PeopleAssigned.getAttackDamage() << RESET << std::endl;
				
	std::cout << BOLD << MAGENTA << "\n🌟 === TESTING SPECIAL FEATURES ===" << RESET << std::endl;
	std::cout << CYAN << "🔍 Identity Reveal:" << RESET << std::endl;
	People.whoAmI();
	
	std::cout << BOLD << RED << "\n💀 === TESTING DEATH SCENARIO ===" << RESET << std::endl;
	std::cout << RED << "☠️  People takes 1000 damage (FATAL)..." << RESET << std::endl;
	People.takeDamage(1000);
	std::cout << GREEN << "💊 People tries to repair 50 HP..." << RESET << std::endl;
	People.beRepaired(50);

	std::cout << BOLD << GREEN << "\n🎉 === PROGRAM COMPLETED === 🎉" << RESET << std::endl;

	return 0;
}

// int	main()
// {
// 	ClapTrap defaultHuman;
// 	ClapTrap Human("HumanA");
// 	std::cout << "Initial Stats: " << std::endl; 
// 	std::cout << "Name: " << Human.getName() << std::endl;
// 	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
	
// 	ScavTrap defaultRobot;
// 	ScavTrap Robot("RobotA");
// 	std::cout << "Initial Stats: " << std::endl;
// 	std::cout << "Name: " << Robot.getName() << std::endl;
// 	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
// 	FragTrap defaultDoll;
// 	FragTrap Doll("DollA");
// 	std::cout << "Initial Stats: " << std::endl;
// 	std::cout << "Name: " << Doll.getName() << std::endl;
// 	std::cout << "HP: " << Doll.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << Doll.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << Doll.getAttackDamage() << std::endl;

// 	DiamondTrap defaultPeople;
// 	DiamondTrap People("PeopleA");
// 	std::cout << "Initial Stats: " << std::endl;
// 	std::cout << "Name: " << People.getName() << std::endl;
// 	std::cout << "ClapName " << People.getClapName() << std::endl;
// 	std::cout << "HP: " << People.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << People.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << People.getAttackDamage() << std::endl;
	
// 	std::cout << "\nTesting actions:" << std::endl;
// 	Human.attack("RobotA");
// 	Robot.takeDamage(4);
// 	Robot.beRepaired(3);
// 	Robot.attack("HumanA");
// 	Human.takeDamage(4);
// 	Human.beRepaired(3);
// 	Doll.attack("HumanA");
// 	Robot.attack("DollA");
// 	Doll.takeDamage(4);
// 	Doll.beRepaired(3);
// 	People.attack("RobotA");
// 	Doll.attack("PeopleA");
// 	People.takeDamage(Doll.getAttackDamage());
// 	People.beRepaired(Doll.getAttackDamage());
	
// 	std::cout << "\nNo points limit test:" << std::endl;
// 	for (int i = 12; i > 0; i--)
// 	 	Human.attack("Human B");

// 	std::cout << "\n===Testing copy constructor ===" << std::endl;
// 	ScavTrap RobotCopy(Robot);
// 	std::cout << "Copied Robot - Name: " << Robot.getName() << ", HP:"
// 				<< RobotCopy.getHitPoints() << std::endl;
// 	FragTrap DollCopy(Doll);
// 	std::cout << "Copied Doll - Name: " << Doll.getName() << ", HP:"
// 				<< DollCopy.getHitPoints() << std::endl;
// 	DiamondTrap PeopleCopy(People);
// 	std::cout << "Copied People - Name: " << People.getName() << ", HP:"
// 				<< PeopleCopy.getHitPoints() << std::endl;

// 	std::cout << "\n=== Testing assignment operator ===" << std::endl;
// 	ScavTrap RobotAssigned;
// 	RobotAssigned = Robot;
// 	std::cout << "Assigned Robot - Name: " << RobotAssigned.getName()
// 				<< ", HP:" << RobotCopy.getHitPoints() << std::endl;
// 	FragTrap DollAssigned;
// 	DollAssigned = Doll;
// 	std::cout << "Assigned Doll - Name: " << DollAssigned.getName()
// 				<< ", HP:" << DollCopy.getHitPoints() << std::endl;
				
// 	std::cout << "\n=== Testing death scenario ===" << std::endl;
// 	ScavTrap DieTest("DieTest");
// 	DieTest.takeDamage(150);
// 	DieTest.attack("Someone");
// 	DieTest.beRepaired(10);
// 	DieTest.guardGate();
// 	FragTrap DieDoll("DieDollTest");
// 	DieDoll.takeDamage(150);
// 	DieDoll.attack("Someone");
// 	DieDoll.beRepaired(100);
// 	DieDoll.highFiveGuys();
// 	People.whoAmI();

// 	// Test edge cases
// 	Robot.takeDamage(-5); // Negative damage
// 	Robot.beRepaired(1000); // Massive healing
// 	// Test inheritance
// 	ClapTrap* ptr = &Robot; // Should work due to inheritance
// 	ptr->attack("target"); // Should call ScavTrap::attack()

	
// 	std::cout << "ClapTrap Post Stats: " << std::endl; 
// 	std::cout << "Name: " << Human.getName() << std::endl;
// 	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;

// 	std::cout << "ScavTrap Post Stats: " << std::endl;
// 	std::cout << "Name: " << Robot.getName() << std::endl;
// 	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
// 	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
// 	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;	
// }
