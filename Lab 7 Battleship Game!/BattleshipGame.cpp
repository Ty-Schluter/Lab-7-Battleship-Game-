#include "BattleshipGame.h"
#include <iostream>
#include <time.h>

BattleshipGame::BattleshipGame()
{
	initializeFleet(playerFleet); // makes player ship fleet
	initializeFleet(computerFleet); // mkaes computer ship fleet
	int comp_x, comp_y, comp_direction;
}

void BattleshipGame::placeShip()
{
	for (int i = 0; i < 5; i++) // the for loop makes sure it only goes through the program 5 times in order to place the ships
	{
		std::cout << "Place " << playerFleet[i].getName() << std::endl; // displays name of ship about to be placed
		std::cout << "Enter starting coordinates (x, y): "; 
		int x, y;
		std::cin >> x >> y; // takes x and y values for coordinates
		std::cout << "Enter direction (0 = vertical, 1 = horizontal): ";
		int direction;
		std::cin >> direction; // same thing as x and y

		playerFleet[i].setXLoc(x); // places x location on grid
		playerFleet[i].setYLoc(y); // places y location
		playerFleet[i].setIsHorizontal(bool(direction)); // Makes the ship horizontal
		// place to put validate ship location fuction
		gameGrid.validLoc();
		// end of validate ship location fucntion
		gameGrid.placeShip(playerFleet[i].getXLoc(), playerFleet[i].getYLoc(), playerFleet[i].getLength(),
			playerFleet[i].getIsHorizontal()); // places the ship with the given information
		computerLoc(); //Obvisiouly I'd use the same validLoc program as the player to make sure the computer isn't cheating either 
		computerFleet[i].setXLoc(comp_x); // same thing as player
		computerFleet[i].setYLoc(comp_y);
		computerFleet[i].setIsHorizontal((comp_direction));
		gameGrid.placeShip(computerFleet[i].getXLoc(), computerFleet[i].getYLoc(), computerFleet[i].getLength(),
			computerFleet[i].getIsHorizontal());
		// there would be a hit and miss function in here. on a loop until all thhe ships are destroyed. 
		gameGrid.printAllGrids(); // updates the grid according.
	}
}

void BattleshipGame::printAllGrids()
{
	gameGrid.printAllGrids();
}

void BattleshipGame::computerLoc()
{
	srand(time(NULL));
	int numberX = rand() % 9 + 0; // generates random number for x location
	switch (numberX)
	{
	case 1:
		if (numberX == 0)
		{
			comp_x = 0;
		}
	case 2:
		if (numberX == 1)
		{
			comp_x = 1;
		}
	case 3:
		if (numberX == 2)
		{
			comp_x = 2;
		}
	case 4:
		if (numberX == 4)
		{
			comp_x = 4;
		}
	case 5:
		if (numberX == 5)
		{
			comp_x = 5;
		}
	case 6:
		if (numberX == 6)
		{
			comp_x = 6;
		}
	case 7:
		if (numberX == 7)
		{
			comp_x = 7;
		}
	case 8:
		if (numberX == 8)
		{
			comp_x = 8;
		}
	case 9:
		if (numberX == 9)
		{
			comp_x = 9;
		}
	}
	int numberY = rand() % 9 + 0; // random y lopcation generator
	switch (numberY)
	{
	case 1:
	{
		if (numberY == 0)

			comp_y = 0;
	}
	case 2:
		if (numberY == 1)
		{
			comp_y = 1;
		}
	case 3:
		if (numberY == 2)
		{
			comp_y = 2;
		}
	case 4:
		if (numberY == 4)
		{
			comp_y = 4;
		}
	case 5:
		if (numberY == 5)
		{
			comp_y = 5;
		}
	case 6:
		if (numberY == 6)
		{
			comp_y = 6;
		}
	case 7:
		if (numberY == 7)
		{
			comp_y = 7;
		}
	case 8:
		if (numberY == 8)
		{
			comp_y = 8;
		}
	case 9:
		if (numberY == 9)
		{
			comp_y = 9;
		}

	}
		int numberDirection = rand() % 1 + 0; // generates random horizontal
		switch(numberDirection)
		{
		case 1:
			if (numberDirection == 1)
			{
				comp_direction = 1;
			}
		case 2:
			if (numberDirection == 0)
			{
				comp_direction = 0;
			}

		} // obviously there would be a function checking if it's valid
	
}

void BattleshipGame::initializeFleet(Ship playerFleet[5],Ship computerFleet[5])
{
	playerFleet[0].setName("Carrier"); // makes the ships attributes for player
	playerFleet[0].setHp(5);
	playerFleet[0].setLength(5); // makes the lenght

	playerFleet[1].setName("Battleship");
	playerFleet[1].setHp(4);
	playerFleet[1].setLength(4);         

	playerFleet[2].setName("Cruiser");
	playerFleet[2].setHp(3);
	playerFleet[2].setLength(3);

	playerFleet[3].setName("Submarine");
	playerFleet[3].setHp(3);
	playerFleet[3].setLength(3);

	playerFleet[4].setName("Destroyer");
	playerFleet[4].setHp(2);
	playerFleet[4].setLength(2);

	computerFleet[0].setName("Carrier"); // same as player
	computerFleet[0].setHp(5);
	computerFleet[0].setLength(5);

	computerFleet[1].setName("Battleship");
	computerFleet[1].setHp(4);
	computerFleet[1].setLength(4);

	computerFleet[2].setName("Cruiser");
	computerFleet[2].setHp(3);
	computerFleet[2].setLength(3);

	computerFleet[3].setName("Submarine");
	computerFleet[3].setHp(3);
	computerFleet[3].setLength(3);

	computerFleet[4].setName("Destroyer");
	computerFleet[4].setHp(2);
	computerFleet[4].setLength(2);
}

