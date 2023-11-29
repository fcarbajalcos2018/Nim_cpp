#ifndef CPU_H
#define CPU_H
#include "Player.h"

class CPU : private Player
{
public:
	bool isPlayer();
	std::tuple<int, int> makeTurn(int pileElemCount, int pileVal);
};

#endif;
