#include "Player.h"
#include <iostream>

Player::Player()
{
	this->elemCount = 0;
}

bool Player::isPlayer()
{
	return true;
}

std::tuple<int, int> Player::makeTurn(int pileElemCount, int pileVal)
{
	int pile, n;
	std::cout << "Player turn" << std::endl;
	std::cout << "Select pile from 1 to 4" << std::endl;
	while (true)
	{
		std::cin >> pile;
		if (pile > 0 && pile <= pileElemCount) break;
		else std::cout << "Incorrect value. Pile should be from 1 to 4." << std::endl;
	}
	std::cout << "Select amount up to " << pileVal << std::endl;
	while (true)
	{
		std::cin >> n;
		this->elemCount += n;
		if (n >= 0 && n <= pileVal) break;
		else std::cout << "Incorrect value. Element count should be from 0 to " << pileVal << std::endl;
	}
	return { pile, n };
}

