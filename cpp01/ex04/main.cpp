/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 04:49:14 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/29 05:34:26 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int open_files(std::ifstream &inputFile, std::ofstream &outputFile, std::string nameInputfile, std::string nameOutputfile) {
	
	inputFile.open(nameInputfile.c_str(), std::fstream::in);
	if (!inputFile.is_open()) {
		std::cout << "Error: could not open file " << nameInputfile << std::endl;
		return 1;
	}
	
	outputFile.open(nameOutputfile.c_str(), std::fstream::out);
	if (!outputFile.is_open()) {
		std::cout << "Error: could not open file " << nameOutputfile << std::endl;
		return 1;
	}
	
	return 0;
}

void string_replace(std::ifstream &inputFile, std::ofstream &outputFile, std::string string1, std::string string2) {
	
	std::string line;

	while (std::getline(inputFile, line)) {
		size_t pos = 0;
		while ((pos = line.find(string1, pos)) != std::string::npos) {
			line.replace(pos, string1.length(), string2);
			pos += string2.length();
		}
		outputFile << line << std::endl;
	}
	
	inputFile.close();
	outputFile.close();
}

int main(int argc, char **argv) {
	std::string nameInputfile;
	std::string nameOutputfile;
	std::ifstream inputFile;
	std::ofstream outputFile;
		
	if (argc != 4) {
		std::cout << "Usage: ./replace [filename] [string1] [string2]" << std::endl;
		return 1;
	}
	
	nameInputfile = argv[1];
	nameOutputfile = nameInputfile + ".replace";
	if (open_files(inputFile, outputFile, nameInputfile, nameOutputfile) == 1) {
		return 1;
	}
	string_replace(inputFile, outputFile, argv[2], argv[3]);
	
	return 0;
}