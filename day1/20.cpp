#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b;
	cin >> a;
	cin >> b;

	a = a * 60;
	b = b * 1000;
	cout << b / a << endl;
}

