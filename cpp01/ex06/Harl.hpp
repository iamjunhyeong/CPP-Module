/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 05:37:09 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 02:10:43 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl();
		~Harl();

		void complain(std::string level);
	};

#endif
