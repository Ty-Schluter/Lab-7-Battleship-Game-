#include "Grid.h"
#include <iostream>

Grid::Grid()
{
	initializeGrid(playerShipGrid);
	initializeGrid(playerShotGrid);
	initializeGrid(computerShipGrid);
	initializeGrid(computerShotGrid);
	char Hit=0;
	char Miss=0;
}

void Grid::placeShip(int x, int y, int size, bool isHorizontal)
{
	if (isHorizontal) // Makes the ship horizontal if it's true
	{
		for (int i = 0; i < size; i++)
		{
			playerShipGrid[x][y + i] = '#'; // Outputs the ship characters
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			playerShipGrid[x + i][y] = '#';
		}
	}
}

void Grid::printAllGrids()
{
	std::cout << "Player Ship Grid" << std::endl; // outputs the grids
	printGrid(playerShipGrid);
	std::cout << std::endl;

	std::cout << "Player Shot Grid" << std::endl;
	printGrid(playerShotGrid);
	std::cout << std::endl;

	std::cout << "Computer Ship Grid" << std::endl;
	printGrid(computerShipGrid);
	std::cout << std::endl;

	std::cout << "Computer Shot Grid" << std::endl;
	printGrid(computerShotGrid);
	std::cout << std::endl;
}

void Grid::validLoc()
{/*
	bool invalid = true; // creates varibale to change if ship is valid location
	do
	{
		if (playerShipGrid[x][y + i] == '#') // makes sure the ship character is not on another ship character
		{
			std::cout << "Please try again.";
			invalid = true; // repeats loop
		}
		else
		{
			invalid = false; // ends loop
		}
		if (playerShipGrid[x + i][y] == '#') / same thing
		{
			std::cout << "Please try again.";
			invalid = true;
		}
		else
		{
			invalid = false;
		}
		if (-1 < x && y > -1 && y < 10 && x < 10) // makes sure it's on grid.
		{
			invalid = false; // ends loop
		}
		else
		{
			std::cout << "Please try again.";
			invalid = true; // repeats loop if so
		}
	} while (invalid);
	*/
}

void Grid::HitorMiss()
{
	/* I do not know how to write this but I would assume it be through a while loop 
	* called turn. There would be 2 phases, one for player and one for the computer. After
	the grid would finish placing al the ships the game would go into the while loop. The
	while loop would probably be ran by a counting varible of some arbtrary letter. Then there would be an
	if statement something like if x= xLoc and y=yLoc then replace "~" with "H" and viceversa for miss but with a "M"
	*/
}

void Grid::printGrid(char grid[10][10])
{
	std::cout << "  "; // off put the x axis to mathc grid
	for (int i = 0; i < 10; i++) // Makes spaces for grid
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " ";
		for (int j = 0; j < 10; j++)
		{
			std::cout << grid[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Grid::initializeGrid(char grid[10][10]) // actively making the 10x10 grid
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			grid[i][j] = '~'; // outputs the water
		}
	}
}

