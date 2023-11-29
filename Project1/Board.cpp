#include "Board.h"
#include <string>
#include <iostream>

/*
* Initialize instance of the Board class.
* Set the number of elements for each pile
*/
Board::Board()
{
	this->BOARD_SIZE = 4;
	this->piles = new int[BOARD_SIZE];
	int boardSizes[] = { 1, 3, 5, 7 };
	for (int i = 0; i < this->BOARD_SIZE; i++)
		this->piles[i] = boardSizes[i];
}

int Board::getElement(int pile)
{
	return this->piles[pile];
}

int Board::getSize()
{
	return this->BOARD_SIZE;
}

/*
* Take one or more elements from one pile as specified via parameters
* Parameters:
* - n: Number of elements to take from pile
* - row: Index value for pile from the Board, or piles array
* Return: Number of elements taken
*/
int Board::take(int n, int row)
{
	int technicalRow = (row > 0) ? row - 1 : 0; // Pile, or row as specified by parameter, is converted to the correct index; if 0 is specified, set to 0 by default
	int temp = (sizeof(this->piles) > n) ? this->piles[technicalRow] - n : 0; // Temporary variable for the modification of a pile when the number specified is less than size of pile; otherwise set to 0
	this->piles[technicalRow] = temp; // Assign temporary variable to actual piles
	return n; // Return number of elements for display
}

/*
* Will verify whether there is only one pile with elements from the board
* Return: True when only pile has elements; otherwise, false
*/
int Board::last()
{
	bool hasOne = false; // Boolean for only one pile with elements
	bool terminate = false; // Boolean to terminate element search
	for (int i = 0; i < this->getSize(); i++)
	{ // Evaluate every pile for elements
		if (this->piles[i] > 0)
		{ // Condition where pile has elements
			if (hasOne)
			{ // Condition where one pile has already elements
				hasOne = false; // Set to false since there is more than one pile with elements
				terminate = true; // Set to true and proceed to the condition that follows
			}
			else hasOne = true; // If no piles have elements since the start of search but the current one, set this to true
		}
		if (terminate) break; // Terminate the search and proceed to return the hasOne boolean
	}
	return hasOne;
}

void Board::display()
{
	//int row_size = sizeof(this->piles) / 4; // Size of nim board by pile, we know by default there are 4 piles
	for (int i = 0; i < this->getSize(); i++)
	{
		std::string elements = "";
		for (int j = 0; j < this->piles[i]; j++) elements += "*";
		std::cout << elements << std::endl;
	}
}

Board::~Board()
{
	delete[] piles;
}
