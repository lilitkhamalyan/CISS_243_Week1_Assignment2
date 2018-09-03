#include "RoomCarpet.h"
#include "RoomDimension.h"

int RoomCarpet::getTotalCost(int &cost, RoomDimension &dimension) const
{
	return cost * dimension.getLength().getFeet() * dimension.getWidth().getFeet() * dimension.getLength().getInches() * dimension.getWidth().getInches();
}