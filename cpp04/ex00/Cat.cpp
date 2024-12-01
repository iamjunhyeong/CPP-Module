/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:25:20 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 23:40:56 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(std::string &type) : Animal(type)
{
	_type = type;
	std::cout << "Cat Type Constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Cat Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	Animal::operator=(copy);
	std::cout << "Cat Assignation Operator" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
