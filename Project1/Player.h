#ifndef PLAYER_H
#define PLAYER_H
#include <tuple>

class Player
{
public:
	Player();
	bool isPlayer();
	std::tuple<int, int> makeTurn(int pileElemCount, int pileVal);

private:
	int elemCount;
};

#endif;