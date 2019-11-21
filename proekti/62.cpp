#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a > 9999)
	{
		int c, e;
		c = (a % 1000) / 100;
		e = a % 10;
		a = (a / 10000) * 10000 + c * 100 + e;
		cout << a << endl;
	}
	else {
		cout << "cin 5 DEGREE number" << endl;
	}
}