/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:57:24 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 02:26:38 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return zombies;
}
