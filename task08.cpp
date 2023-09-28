#include<iostream>
using namespace std;
void calculatePayableAmount(string a,float b);

main() {
	string day;
	cout << "Enter the day of purchase: ";
	cin >> day;
	float total;
	cout << "Enter the total purchase amount: $";
	cin >> total;

	calculatePayableAmount(day,total);
}

void calculatePayableAmount(string a,float b)
{	if(a== "Sunday")
	{b = b - (b * 0.1);
	cout <<"Payable Amount: $" <<b;
}
	else
	{cout << "Payable Amount: $"<<b;}


}