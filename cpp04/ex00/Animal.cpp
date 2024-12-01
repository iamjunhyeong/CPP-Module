/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:23:59 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 23:52:44 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Type Constructor" << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << "Animal Copy Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this == &copy)
		return *this;
	_type = copy._type;
	std::cout << "Animal Assignation Operator" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
