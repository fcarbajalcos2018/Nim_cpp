#include <iostream>
#include <string>
#include "Board.h"

int main()
{
	bool isMultiplayer; // Boolean for multiplayer state
	int playerCount; // User response for no. of players
	while (true)
	{
		std::cout << "Welcome to Nim! Choose the following: " << std::endl;
		std::cout << "1 Player (vs AI), press 1" << std::endl;
		std::cout << "2 Players, press 2" << std::endl;
		std::cin >> playerCount;
		if (playerCount == 2)
		{ // If player count is 2, set multiplayer state to true
			isMultiplayer = true;
			break;
		}
		else if (playerCount == 1)
		{ // Otherwise, set it to false
			isMultiplayer = false;
			break;
		} // If neither 1 or 2, display a message stating as invalid
		else std::cout << "Not a valid response. Please enter a valid key." << std::endl;
	}
	std::cout << "Your response: " << isMultiplayer << std::endl;

	bool isPlayer1Turn = true; // Boolean for first player's turn
	bool isTerminal = false; // Boolean for terminal (game end) condition
	Board board = Board(); // Initialize the board instance
	board.display();
	while (true)
	{ // Looping operation for the base game
		if (isPlayer1Turn)
		{ // Player 1 (non-CPU) turn

		}
		else
		{
			if (isMultiplayer)
			{ // When multiplayer true, user makes choice

			}
			else
			{ // Otherwise, CPU makes choice using the specified AI algorithm

			}
		}
		if (isTerminal)
		{ // If terminal condition is true, end the looping operation and the game
			break;
		}
	}
}