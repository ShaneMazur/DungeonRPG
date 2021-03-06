#ifndef __VAMPIRE_H__
#define __VAMPIRE_H__

#include <string>
#include "player.h"

class Vampire : public Player {
	const std::string vampireHeroID = "Vampire";
	const int healthGainRate = 5;
	
public:
	Vampire(int health, int attack, int defense);
	~Vampire();

	void setHealth(int newHealth) override;
	bool attackEnemy(Character* enemy) override;	
};

#endif