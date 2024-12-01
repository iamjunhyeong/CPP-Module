/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:29:31 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 23:29:39 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string &type);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);
		virtual ~Dog();
		
		virtual void makeSound() const;
};

#endif