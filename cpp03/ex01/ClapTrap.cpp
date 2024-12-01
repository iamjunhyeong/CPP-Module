/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:27:30 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 17:54:43 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " Deconstructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy assignment constructor called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
		return ;
	}

	this->_energyPoints -= 1;

	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead and can not be more demaged!" << std::endl;
		return ;
	}

	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and cannot be repaired!" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to be repaired!" << std::endl;
		return ;
	}

	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
}

unsigned int ClapTrap::get_hit_points(void) const
{
	return (_hitPoints);
}

unsigned int ClapTrap::get_energy_points(void) const
{
	return (_energyPoints);
}

unsigned int ClapTrap::get_attack_damage(void) const
{
	return (_attackDamage);
}

std::string ClapTrap::get_name(void) const
{
	return (_name);
}

void ClapTrap::set_hit_points(unsigned int hit_points)
{
	_hitPoints = hit_points;
}

void ClapTrap::set_energy_points(unsigned int energy_points)
{
	_energyPoints = energy_points;
}

void ClapTrap::set_attack_damage(unsigned int attack_damage)
{
	_attackDamage = attack_damage;
}

void ClapTrap::set_name(std::string name)
{
	_name = name;
}
