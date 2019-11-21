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
		d = a % 10;
		c = (a % 100) / 10;
		b = (a % 1000) / 100;
		a = a / 1000;
		if (a > b && b > c && c > d)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	else {
		cout << "cin 4 DEGREE number" << endl;
	}
}