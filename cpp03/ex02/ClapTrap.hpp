/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:55:52 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 17:52:15 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	virtual ~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	unsigned int	get_hit_points(void) const;
	void			set_hit_points(unsigned int hit_points);
	unsigned int	get_energy_points(void) const;
	void			set_energy_points(unsigned int energy_points);
	unsigned int	get_attack_damage(void) const;
	void			set_attack_damage(unsigned int attack_damage);
	std::string		get_name(void) const;
	void			set_name(std::string name);
};

#endif