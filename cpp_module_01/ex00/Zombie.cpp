#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) {
	
	this->name = new_name; //конструктор который мы вызываем каждый раз при создании объекта
}

Zombie::~Zombie() {
	
	std::cout << name << " is dead, again!" << std::endl; //деструктор который мы ввызываем при удалении класса (отчистки данных) и печатаем сообщение
}

void Zombie::announcement( void ) {
	
	std::cout << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}