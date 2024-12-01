/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 02:15:30 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 02:15:46 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harl [level]" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return 0;
}