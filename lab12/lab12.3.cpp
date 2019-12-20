// lab12.3.cpp : Defines the entry point for the console application.
#include <iostream>
using namespace std;
double RingS(double r1, double r2)
{
	const double p = 3.14;
	return (p * (pow(r1, 2) - pow(r2, 2)));
}

int main()
{
	float r1, r2;
	for (int i = 0; i < 3; i++)
	{
		cout << "r1";
		cin >> r1;
		cout << "r2";
		cin >> r2;
		cout << RingS(r1,r2);
	}

}

