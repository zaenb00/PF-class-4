#include<iostream>
using namespace std;
void calculateFuel(float fuel);

main(){
	float d;
	cout << "Enter the distance: ";
	cin >> d;
	float fuel;
	fuel = d*10;
	
	calculateFuel(fuel);
}

void calculateFuel(float fuel)
{	if(fuel > 100){
	cout << "Fuel needed: "<< fuel;
}
	if(fuel < 100){
	int x;
	x=100;
	cout << "Fuel needed: "<<x;
}
}