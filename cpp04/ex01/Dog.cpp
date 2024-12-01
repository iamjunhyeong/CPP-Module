/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:30:16 by junhyeong         #+#    #+#             */
/*   Updated: 2024/12/01 01:18:08 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(std::string &type) : Animal(type)
{
	std::cout << "Dog Type Constructor" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Assignation Operator" << std::endl;
	if (this == &copy)
		return *this;
	
	_type = copy._type;
	delete this->_brain;
	_brain = new Brain(*copy._brain);

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

std::string Dog::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_brain->ideas[index]);
	else
		return ("Dog brain just have 100 ideas");
}

void Dog::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->_brain->ideas[index] = idea;
	else
		std::cout << "Dog brain just have 100 ideas" << std::endl;
}