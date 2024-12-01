/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:57:39 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 04:25:35 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie {
	
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
