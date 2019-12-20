// lab12.4.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;
int Quarter(int x, int y)
{
	int a = 0;
	if (x > 0 && y > 0)
		a = 1;
	if (x < 0 && y > 0)
		a = 2;
	if (x < 0 && y < 0)
		a = 3;
	if (x > 0 && y < 0)
		a = 4;
	return a;
}

int main()
{
	int x, y;
	cout << "x,y";
	cin >> x >> y;
	if (x != 0 && y != 0)
	{
		cout << Quarter(x, y) << " coordinate quarter";
	}
	else
	{
		cout << "error";
	}
	system("pause");
	return 0;
}


