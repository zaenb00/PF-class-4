#include <iostream>
using namespace std;
void inchesToFeet(float inft);

main()
{
	float in;
	cout << "Enter the measurement in inches: ";
	cin >> in;

	inchesToFeet(in);
}

void inchesToFeet(float inft)
{
	float ft;
	ft=inft/12;
	cout << "Equivalent in feet: "<< ft;
}