#include<iostream>
using namespace std;
void calculateFuel(float diatance);

main() 
{
	float distance;
	cout << "Enter the distance: ";
	cin>> distance;
	
	calculateFuel(distance);
}
void calculateFuel(float distance)
{
	float fuelNeeded;
	fuelNeeded= distance*10;
	cout << "Fuel needed: "<<fuelNeeded;
}