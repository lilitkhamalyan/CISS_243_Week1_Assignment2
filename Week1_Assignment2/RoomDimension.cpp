#include "RoomDimension.h"
#include "FeetInches.h"

int RoomDimension::getArea(FeetInches &length, FeetInches &width) const
{
	return length.multiply(width);
}