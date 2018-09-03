#include <iostream>
#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"
using namespace std;
int main()
{
	int length, width, cost;
	cout << "Lenght" << endl;
    cin >> length;
	cout << "Width" << endl;
	cin >> width;
	cout << "Cost" << endl;
	cin >> cost;
	RoomDimension myDimension = RoomDimension(length, width);
	RoomCarpet final = RoomCarpet(myDimension, cost);
	//final.setCost(cost);
	cout << "the total " << final.getTotalCost(cost, myDimension) << endl;
	return 0;
}