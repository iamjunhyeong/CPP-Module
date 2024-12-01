/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:33:13 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 23:41:41 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type)
{
	std::cout << "WrongCat Type Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this == &copy)
		return *this;
	WrongAnimal::operator=(copy);
	std::cout << "WrongCat Assignation Operator" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}