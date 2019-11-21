#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a > 999)
	{
		int b, c, d;
		b = (a * 1000) / 100;
		c = (a * 100) / 10;
		d = a % 10;
		a = a / 1000;
		if (a == d && b == c)
		{
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	else {
		cout << "cin 3 DEGREE numbers" << endl;
	}
}