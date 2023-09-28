#include<iostream>
using namespace std;
void Pass(int num);

main() 
{ 	int num;
	cout <<"Enter your score: ";
	cin >> num;

	Pass(num);
}

void Pass(int num)
{	if(num > 50){
	cout << "Pass";
}
	if(num <= 50){
	cout << "Fail";
}

}