/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeop <junhyeop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:25:20 by junhyeong         #+#    #+#             */
/*   Updated: 2024/12/01 17:22:16 by junhyeop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(std::string &type) : Animal(type)
{
	std::cout << "Cat Type Constructor" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Assignation Operator" << std::endl;
	if (this == &copy)
		return *this;
		
	this->_type = copy._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*copy._brain);

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

std::string Cat::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return (_brain->ideas[idx]);
	else
		return ("Cat brain just have 100 ideas");
}

void Cat::setIdea(int idx, std::string idea)
{
	if (idx >= 0 && idx < 100)
		_brain->ideas[idx] = idea;
	else
		std::cout << "Cat brain just have 100 ideas" << std::endl;
}