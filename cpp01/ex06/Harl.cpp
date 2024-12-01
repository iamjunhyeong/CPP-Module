/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 02:10:52 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 02:25:09 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	void(Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++) {
		if (levels[i] == level) {
			break;
		}
	}

	switch (i) {
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			(this->*complaints[0])();
			std::cout << std::endl;

			std::cout << "[ " << levels[1] << " ]" << std::endl;
			(this->*complaints[1])();
			std::cout << std::endl;

			std::cout << "[ " << levels[2] << " ]" << std::endl;
			(this->*complaints[2])();
			std::cout << std::endl;

			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*complaints[3])();
			std::cout << std::endl;

			break;
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			(this->*complaints[1])();
			std::cout << std::endl;

			std::cout << "[ " << levels[2] << " ]" << std::endl;
			(this->*complaints[2])();
			std::cout << std::endl;

			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*complaints[3])();
			std::cout << std::endl;

			break;
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			(this->*complaints[2])();
			std::cout << std::endl;

			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*complaints[3])();
			std::cout << std::endl;
			
			break;
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			(this->*complaints[3])();
			std::cout << std::endl;
			
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}