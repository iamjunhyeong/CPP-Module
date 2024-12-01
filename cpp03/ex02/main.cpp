/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:29:48 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 18:29:35 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	
	std::cout << "\033[33m" << std::endl << "Showing ScavTrap constructor" << "\033[0m" << std::endl;
	ScavTrap default_clap;
	ScavTrap tim("Tim");
	std::cout << default_clap.get_name() << " has " << default_clap.get_hit_points() << " hit points and " << default_clap.get_energy_points() << " energy points left" << std::endl;
	std::cout << tim.get_name() << " has " << tim.get_hit_points() << " hit points and " << tim.get_energy_points() << " energy points left" << std::endl;

	std::cout << "\033[33m" << std::endl << "Tests for FragTrap constructor" << "\033[0m" << std::endl;
	FragTrap default_thorben;
	FragTrap thorben("Thorben");
	
	std::cout << "\033[33m" << std::endl << "Tests for FragTrap functions" << "\033[0m" << std::endl;
	thorben.highFivesGuys();
	thorben.attack("a car");
	std::cout << thorben.get_name() << " has " << thorben.get_hit_points() << " hit points and " << thorben.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Tests for FragTrap copy constructor" << "\033[0m" << std::endl;
	FragTrap copythorben(thorben);
	std::cout << copythorben.get_name() << " has " << copythorben.get_hit_points() << " hit points and " << copythorben.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for FragTrap copy assignment constructor" << "\033[0m" << std::endl;
	thorben.attack("a car");
	std::cout << thorben.get_name() << " has " << thorben.get_hit_points() << " hit points and " << thorben.get_energy_points() << " energy points left" << std::endl;
	FragTrap thirdthorben("ThirdThorben");
	std::cout << thirdthorben.get_name() << " has " << thirdthorben.get_hit_points() << " hit points and " << thirdthorben.get_energy_points() << " energy points left" << std::endl;
	thirdthorben = thorben;
	std::cout << thirdthorben.get_name() << " has " << thirdthorben.get_hit_points() << " hit points and " << thirdthorben.get_energy_points() << " energy points left" << std::endl;


	std::cout << "\033[33m" << std::endl << "Tests for more FragTrap functions" << "\033[0m" << std::endl;
	thorben.takeDamage(2);
	std::cout << thorben.get_name() << " has " << thorben.get_hit_points() << " hit points and " << thorben.get_energy_points() << " energy points left" << std::endl;

	thorben.beRepaired(2);
	std::cout << thorben.get_name() << " has " << thorben.get_hit_points() << " hit points and " << thorben.get_energy_points() << " energy points left" << std::endl;
	

	std::cout << "\033[33m" << std::endl << "Deconstructor calling" << "\033[0m" << std::endl;

	return (0);
}
