#ifndef BOARD_H
#define BOARD_H

class Board
{
public:
	Board();
	int take(int n, int row);
	int last();
	void display();
private:
	int piles[4];
};

#endif;