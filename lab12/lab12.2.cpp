#include <iostream>
using namespace std;

float Sign(float x)
{
	if (x < 0) {
		return -1;
	}
	else if (x == 0) {
		return 0;
	}
	else if (x > 0) {
		return 1;
	}
	return 0;
}

int main()
{
	float a, b;
	cout << " a,b: ";
	cin >> a >> b;
	cout << Sign(a) + Sign(b) << endl;
} 

