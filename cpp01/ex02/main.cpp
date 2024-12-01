/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 23:38:01 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 01:53:35 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;	

	std::cout << "Address of the string: " << &string << std::endl;
	std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of the stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String: " << string << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	
	return 0;
}