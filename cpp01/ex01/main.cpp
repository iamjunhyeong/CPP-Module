/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:49:09 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/28 22:23:02 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	
	int N = 3;
	Zombie* horde = zombieHorde(N, "Horde");

	for (int i = 0; i < N; i++) {
		std::cout << "Zombie " << i + 1 << ": ";
		horde[i].announce();
	}
	
	delete[] horde;
	return 0;	
}