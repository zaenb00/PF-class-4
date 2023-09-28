#include <iostream>
using namespace std;
void howManyStickers(int stickers);

main()
{	int l;
	cout << "Enter the side length of the Rubik's Cube: ";
	cin >> l;

	howManyStickers(l);
}


void howManyStickers(int stickers)
{
	int stickNeed;
	stickNeed=stickers*stickers*6;
	cout << "Number of stickers needed: "<<stickNeed;
}