/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:30:16 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 23:41:27 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(std::string &type) : Animal(type)
{
	_type = type;
	std::cout << "Dog Type Constructor" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;
	Animal::operator=(copy);
	std::cout << "Dog Assignation Operator" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}
