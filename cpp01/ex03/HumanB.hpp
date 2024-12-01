/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:40:13 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 04:32:03 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
