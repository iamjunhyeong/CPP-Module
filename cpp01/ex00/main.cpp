/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:49:09 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/28 21:52:28 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie* zombie = newZombie("Zombie1");
	
	
	zombie->announce();
	randomChump("random zombie");
	delete zombie;
	return 0;
}