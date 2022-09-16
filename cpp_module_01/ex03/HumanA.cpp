#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(weapon) {} //инициирует переменную напрямую, так мы можем передать оружие по ссылке это называется список инициализаторов конструктора

HumanA::~HumanA () {
    std::cout << this->name << " died! " << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}