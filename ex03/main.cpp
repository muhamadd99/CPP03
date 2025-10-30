/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/30 16:50:19 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main()
{
	// ClapTrap defaultHuman;
	// ClapTrap Human("HumanA");
	// std::cout << "Initial Stats: " << std::endl; 
	// std::cout << "Name: " << Human.getName() << std::endl;
	// std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	// std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
	
	// ScavTrap defaultRobot;
	// ScavTrap Robot("RobotA");
	// std::cout << "Initial Stats: " << std::endl;
	// std::cout << "Name: " << Robot.getName() << std::endl;
	// std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	// std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
	// FragTrap defaultDoll;
	// FragTrap Doll("DollA");
	// std::cout << "Initial Stats: " << std::endl;
	// std::cout << "Name: " << Doll.getName() << std::endl;
	// std::cout << "HP: " << Doll.getHitPoints() << std::endl; 
	// std::cout << "Energy: " << Doll.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << Doll.getAttackDamage() << std::endl;

	DiamondTrap defaultPeople;
	DiamondTrap People("PeopleA");
	std::cout << "Initial Stats: " << std::endl;
	std::cout << "Name: " << People.getName() << std::endl;
	std::cout << "ClapName " << People.getClapName() << std::endl;
	std::cout << "HP: " << People.getHitPoints() << std::endl; 
	std::cout << "Energy: " << People.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << People.getAttackDamage() << std::endl;
	
	// std::cout << "\nTesting actions:" << std::endl;
	// Human.attack("RobotA");
	// Robot.takeDamage(4);
	// Robot.beRepaired(3);
	// Robot.attack("HumanA");
	// Human.takeDamage(4);
	// Human.beRepaired(3);
	// Doll.attack("HumanA");
	// Robot.attack("DollA");
	// Doll.takeDamage(4);
	// Doll.beRepaired(3);
	// People.attack("RobotA");
	// Doll.attack("PeopleA");
	// People.takeDamage(Doll.getAttackDamage());
	// People.beRepaired(Doll.getAttackDamage());
	
	// std::cout << "\nNo points limit test:" << std::endl;
	// for (int i = 12; i > 0; i--)
	//  	Human.attack("Human B");

	// std::cout << "\n===Testing copy constructor ===" << std::endl;
	// ScavTrap RobotCopy(Robot);
	// std::cout << "Copied Robot - Name: " << Robot.getName() << ", HP:"
	// 			<< RobotCopy.getHitPoints() << std::endl;
	// FragTrap DollCopy(Doll);
	// std::cout << "Copied Doll - Name: " << Doll.getName() << ", HP:"
	// 			<< DollCopy.getHitPoints() << std::endl;
	// DiamondTrap PeopleCopy(People);
	// std::cout << "Copied People - Name: " << People.getName() << ", HP:"
	// 			<< PeopleCopy.getHitPoints() << std::endl;

	// std::cout << "\n=== Testing assignment operator ===" << std::endl;
	// ScavTrap RobotAssigned;
	// RobotAssigned = Robot;
	// std::cout << "Assigned Robot - Name: " << RobotAssigned.getName()
	// 			<< ", HP:" << RobotCopy.getHitPoints() << std::endl;
	// FragTrap DollAssigned;
	// DollAssigned = Doll;
	// std::cout << "Assigned Doll - Name: " << DollAssigned.getName()
	// 			<< ", HP:" << DollCopy.getHitPoints() << std::endl;
				
	// std::cout << "\n=== Testing death scenario ===" << std::endl;
	// ScavTrap DieTest("DieTest");
	// DieTest.takeDamage(150);
	// DieTest.attack("Someone");
	// DieTest.beRepaired(10);
	// DieTest.guardGate();
	// FragTrap DieDoll("DieDollTest");
	// DieDoll.takeDamage(150);
	// DieDoll.attack("Someone");
	// DieDoll.beRepaired(100);
	// DieDoll.highFiveGuys();
	// People.whoAmI();

	// // Test edge cases
	// Robot.takeDamage(-5); // Negative damage
	// Robot.beRepaired(1000); // Massive healing
	// // Test inheritance
	// ClapTrap* ptr = &Robot; // Should work due to inheritance
	// ptr->attack("target"); // Should call ScavTrap::attack()

	
	// std::cout << "ClapTrap Post Stats: " << std::endl; 
	// std::cout << "Name: " << Human.getName() << std::endl;
	// std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	// std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << Human.getAttackDamage() << std::endl;

	// std::cout << "ScavTrap Post Stats: " << std::endl;
	// std::cout << "Name: " << Robot.getName() << std::endl;
	// std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	// std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	// std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;	
}
