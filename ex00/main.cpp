/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:56:58 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/10/29 11:30:01 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap defaultTest;
	ClapTrap Human("HumanA");
	std::cout << "Initial Stats: " << std::endl; 
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
	
	std::cout << "\nTesting actions:" << std::endl;
	Human.attack("Human B");
	Human.takeDamage(4);
	Human.beRepaired(3);
	
	std::cout << "\nNo points limit test:" << std::endl;
	for (int i = 12; i > 0; i--)
		Human.attack("Human B");
	
	std::cout << "Post Stats: " << std::endl; 
	std::cout << "Name: " << Human.getName() << std::endl;
	std::cout << "HP: " << Human.getHitPoints() << std::endl; 
	std::cout << "Energy: " << Human.getEnergyPoints() << std::endl;
	std::cout << "Attack: " << Human.getAttackDamage() << std::endl;
}

// int main()
// {
//     ClapTrap defaultTest;
//     ClapTrap Human("HumanA");
    
//     std::cout << BOLD << CYAN << "Initial Stats: " << RESET << std::endl; 
//     std::cout << GREEN << "Name: " << RESET << Human.getName() << std::endl;
//     std::cout << GREEN << "HP: " << RESET << Human.getHitPoints() << std::endl; 
//     std::cout << GREEN << "Energy: " << RESET << Human.getEnergyPoints() << std::endl;
//     std::cout << GREEN << "Attack: " << RESET << Human.getAttackDamage() << std::endl;
    
//     std::cout << BOLD << YELLOW << "\nTesting actions:" << RESET << std::endl;
//     Human.attack("Human B");
//     Human.takeDamage(4);
//     Human.beRepaired(3);
    
//     std::cout << BOLD << MAGENTA << "\nEnergy depletion test:" << RESET << std::endl;
//     for (int i = 12; i > 0; i--)
//         Human.attack("Human B");
    
//     std::cout << BOLD << CYAN << "Post Stats: " << RESET << std::endl; 
//     std::cout << GREEN << "Name: " << RESET << Human.getName() << std::endl;
//     std::cout << GREEN << "HP: " << RESET << Human.getHitPoints() << std::endl; 
//     std::cout << GREEN << "Energy: " << RESET << Human.getEnergyPoints() << std::endl;
//     std::cout << GREEN << "Attack: " << RESET << Human.getAttackDamage() << std::endl;
    
//     return 0;
// }