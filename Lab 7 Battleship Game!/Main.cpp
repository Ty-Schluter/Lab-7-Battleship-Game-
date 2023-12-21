/*
* Name: Ty Schluter
* C++ FA23
* Lab Name: Lab 7 Battleship
	Description: For this lab you will make a simple battleship game. If you�re not familiar
with the game, some quick internet searches should help. For this lab, you will need four
10 x 10 grids (two for the user and two for the computer). The program will begin with
setup. The program will need to randomly place the computers 5 ships, making sure the
ships do not overlap or go off the board. Sizes of ships:
		Carrier: 5
		Battleship: 4
		Cruiser: 3
		Submarine: 3
		Destroyer: 2
	For placing the user�s ships, the user should be able to choose a xy coordinate and a
direction to place the ship. Again, the program should check to make sure the ship
placement is valid. The grid and coordinate system should be setup with x in the
horizontal direction and y in the vertical direction.
	For each turn of the game, the computer should randomly choose locations to fire and
the results should be shared and tracked on the screen. An example output on the
computer�s turn would show the computer firing and giving the coordinates, display the
result of �HIT!� and display an updated grid with ships and the locations of all of the
computer�s hits and misses. When displaying the grid, you must have the grid coordinates 
displayed on the boarder for reference. The following table represents the characters you 
will use to display the grid:
		Water: ~
		Ship: #
		Hit: H
		Miss: M
	You should give the user the option during each turn to fire, view user�s ship grid, or
surrender. When the fire function is called, display the user�s guess grid for reference.
The program must ensure the computer and user only fire at valid locations that have
not been checked. When one of the fleets is destroyed, the program should recognized
it, communicate the results to the users, given an update on wins and losses, and give
them the option to play again or quit. Make sure to use good programing practices for
this lab. I expect that you use functions for each action the program takes, your code is
well documented with pre/post conditions, and your code is reasonably efficient. When
you have completed this lab, upload a copy to GitHub and submit the link in Canvas.
*/

#include <iostream>
#include "BattleshipGame.h"
void StartMessage();
int main()
{
	StartMessage(); // outputs starting message to screen
	BattleshipGame game; // declares calling card
	game.printAllGrids();// displays grid
	game.placeShip();// allows placing of ships

	//game.printAllGrids();


	return 0;
}

void StartMessage()
{
	std::cout << "Hello my name is Jacob! Welcome to BATTLESHIP! Your goal is to sink all of my ships. I have 5 ships in total. You will  type coordinates by typing x space y enter. For example: 2 3 then you hit enter and your ship will be there.            The starting point of your ship is where it will be placed based off of those coordinates. If you sink all of my ships    you win and same terms apply to me as well. Good luck!"<< std::endl;
	std::cout << "*Hint* My carrier is 5 units in length, my battleship is 4 units in length, my submarine and cruiser are 3 units in     length, and my destroyer is 2 units in length*Hint*\n\n" << std::endl;
}