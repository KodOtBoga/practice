#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a > 99)
	{
		int b, c, d;
		d = a % 10;
		c = (a % 100) / 10;
		b = a / 100;
		swap(b, d);
		a = b * 100 + c * 10 + d;
		cout << a << endl;
	}
	else {
		cout << "cin 3 DEGREE number" << endl;
	}
}