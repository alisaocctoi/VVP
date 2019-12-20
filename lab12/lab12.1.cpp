// lab12.1.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

void PowerA3(double a, double &b)
{
	b = a * a * a;
}

void main()
{
	double a, b;
	b=0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "a:";
		cin >> a;
		PowerA3(a, b);
		cout <<b << endl;
	}
	
}

