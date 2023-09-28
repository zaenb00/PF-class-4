#include<iostream>
using namespace std;
void add(int n1, int n2);
void multiply(int n1, int n2);
void subtract(int n1, int n2);
void divide(int n1, int n2);

main()
{ 
	int n1;
	cout << "Enter 1st number: ";
	cin >> n1;
	int n2;
	cout << "Enter 2nd number: ";
	cin >> n2;
	char op;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;
if(op == '+'){ 
		add(n1, n2); 
	}
if(op == '*'){	
		multiply(n1, n2);
	}
if(op == '-'){
		subtract(n1, n2);
	}
if(op == '/'){	
		divide(n1, n2);
	}

}

void add(int n1, int n2)
{	int sum;
	sum= n1+n2;
	cout << "Addition: "<< sum;
}

void multiply(int n1, int n2)
{	int multi;
	multi=n1*n2;
	cout << "Multiplication: "<<multi;
}

void subtract(int n1, int n2)
{	int sub;
	sub=n1-n2;
	cout << "Subtraction: "<<sub;
}

void divide(int n1, int n2)
{	int div;
	div=n1/n2;
	cout << "Division: "<<div;
}
