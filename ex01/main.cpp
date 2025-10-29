/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/29 16:52:14 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap defaultHuman;
	ClapTrap Human("HumanA");
	std::cout << "Initial Stats: " << std::endl; 
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
	
	ScavTrap defaultRobot;
	ScavTrap Robot("RobotA");
	std::cout << "Initial Stats: " << std::endl;
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;
	
	std::cout << "\nTesting actions:" << std::endl;
	Human.attack("RobotA");
	Robot.takeDamage(4);
	Robot.beRepaired(3);
	Robot.attack("HumanA");
	Human.takeDamage(4);
	Human.beRepaired(3);
	
	std::cout << "\nNo points limit test:" << std::endl;
	for (int i = 12; i > 0; i--)
	 	Human.attack("Human B");

	std::cout << "\n===Testing copy constructor ===" << std::endl;
	ScavTrap RobotCopy(Robot);
	std::cout << "Copied Robot - Name: " << Robot.getName() << ", HP:"
				<< RobotCopy.getHitPoints() << std::endl;

	std::cout << "\n=== Testing assignment operator ===" << std::endl;
	ScavTrap RobotAssigned;
	RobotAssigned = Robot;
	std::cout << "Assigned Robot - Name: " << RobotAssigned.getName()
				<< ", HP:" << RobotCopy.getHitPoints() << std::endl;

	std::cout << "\n=== Testing death scenario ===" << std::endl;
	ScavTrap DieTest("DieTest");
	DieTest.takeDamage(150);
	DieTest.attack("Someone");
	DieTest.beRepaired(10);
	DieTest.guardGate();
	
	std::cout << "ClapTrap Post Stats: " << std::endl; 
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;

	std::cout << "ScavTrap Post Stats: " << std::endl;
	std::cout << "Name: " << Robot.getName() << std::endl;
	std::cout << "HP: " << Robot.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Robot.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Robot.getAttackDamage() << std::endl;	
}
