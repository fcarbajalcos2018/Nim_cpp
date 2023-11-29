#ifndef BOARD_H
#define BOARD_H

class Board
{
public:
	Board();
	int getElement(int pile);
	int getSize();
	int take(int n, int row);
	int last();
	void display();
	~Board();
private:
	int BOARD_SIZE;
	int *piles;
};

#endif;