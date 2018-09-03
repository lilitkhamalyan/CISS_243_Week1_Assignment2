#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H
#include "FeetInches.h"
#include <iostream>
using namespace std;

class RoomDimension
{
private:
	FeetInches length; 
	FeetInches width; 
public:
	//Constructor
	RoomDimension(FeetInches l = 0, FeetInches w = 0)
	{
		length = l.getFeet();
		width = w.getFeet();
		getArea(length, width);
	}
	////Mutator functions
	//void setLength(int l)
	//{
	//	length = l;
	//}
	//void setWidth(int w)
	//{
	//	width = w;
	//}
	////Accessor functions
	FeetInches getLength() const
	{
		return length;
	}
	FeetInches getWidth() const
	{
		return width;
	}

	int getArea(FeetInches &, FeetInches &) const;

	//int getArea(FeetInches length) const
	//{
	//	
	//	return lenght.multiply(width);
	//}
};


#endif
