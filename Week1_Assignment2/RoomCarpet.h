#ifndef ROOMCARPET_H
#define  ROOMCARPET_H
#include "RoomDimension.h"
#include <iostream>
using namespace std;


class RoomCarpet
{
private:
	int cost;
	RoomDimension dimention;
public:
	RoomCarpet()
	{
		
	}
	RoomCarpet(RoomDimension d,  int c = 0)
	{
		cost = c;
		dimention = d;
	
	}
	void setCost(int c)
	{
		cost = c;
	}

	int getTotalCost(int &, RoomDimension &) const;

};
#endif

