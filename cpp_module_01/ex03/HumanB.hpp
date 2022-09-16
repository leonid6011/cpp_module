#include <string>
#include <iostream>

#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon      *weapon;
	public:
        HumanB();
		HumanB(const std::string name);
        ~HumanB();
		void setWeapon(Weapon& weapon);
		void attack();
};