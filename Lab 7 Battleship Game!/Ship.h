#ifndef SHIP_H
#define SHIP_H

#include <string>

class Ship
{
public:
	Ship();
	Ship(int hp, int length, int xLoc, int yLoc, bool isHorizontal, std::string name);

	int getHp(); // gives the ability to makes the ships be placed based off of user input data
	int getLength();
	int getXLoc();
	int getYLoc();
	bool getIsHorizontal();
	std::string getName();

	void setHp(int hp);
	void setLength(int length);
	void setXLoc(int xLoc);
	void setYLoc(int yLoc);
	void setIsHorizontal(bool isHorizontal);
	void setName(std::string name);

private:
	int hp; 
	int length;
	int xLoc;
	int yLoc;
	bool isHorizontal;
	std::string name;
};

#endif // !SHIP_H