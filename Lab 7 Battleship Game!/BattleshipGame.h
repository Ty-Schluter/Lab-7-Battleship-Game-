#ifndef BATTLESHIPGAME_H
#define BATTLESHIPGAME_H

#include "Grid.h"
#include "Ship.h"

class BattleshipGame
{
public:
	BattleshipGame();

	void placeShip();

	void printAllGrids();

	void computerLoc();

	void initializeFleet(Ship playerFleet[5], Ship computerFleet[5]);

	//void game();

private:
	Grid gameGrid;
	Ship playerFleet[5];
	Ship computerFleet[5];

	int comp_x, comp_y, comp_direction;

	void initializeFleet(Ship fleet[5]); 
};

#endif // !BATTLESHIPGAME_H
