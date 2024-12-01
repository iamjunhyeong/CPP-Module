/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:57:34 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 04:25:35 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
}
