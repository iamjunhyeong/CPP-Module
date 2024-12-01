/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:20:39 by junhyeong         #+#    #+#             */
/*   Updated: 2024/12/01 00:52:40 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string _type;
		
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual ~Animal();
		
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
