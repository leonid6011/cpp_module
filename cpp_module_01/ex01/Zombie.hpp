#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

	private:
		std::string name;
	public:
		Zombie();
		~Zombie(); //деструктор
		void announcement(void);
		void setNameZombie(std::string name);
		std::string getNameZombie(void);
};

Zombie* zombieHorde(int n, std::string name);

#endif