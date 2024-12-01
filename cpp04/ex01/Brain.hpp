/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 23:54:20 by junhyeong         #+#    #+#             */
/*   Updated: 2024/12/01 00:53:58 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		~Brain();
		
		std::string ideas[100];
};

#endif