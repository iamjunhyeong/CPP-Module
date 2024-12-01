/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 02:02:16 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 04:27:25 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}
