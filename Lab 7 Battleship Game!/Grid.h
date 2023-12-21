#ifndef GRID_H
#define GRID_H

class Grid
{
public:
	Grid();

	void placeShip(int x, int y, int size, bool isHorizontal);

	void printAllGrids();

	void validLoc();

	void HitorMiss();

private:
	char playerShipGrid[10][10]; // makes the 4 10 x 10 grid functions os theey can be called
	char playerShotGrid[10][10];
	char computerShipGrid[10][10];
	char computerShotGrid[10][10];

	void printGrid(char grid[10][10]); // outputs the grid
	void initializeGrid(char grid[10][10]);

	char Hit; // Varibales for hit and miss function
	char Miss;

};

#endif // !GRID_H

