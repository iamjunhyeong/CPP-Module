#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Zombie has been created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie " << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " has been destroyed" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

std::string Zombie::getName() {
	return this->_name;
}
