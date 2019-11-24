#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int b, c, d, e;
	for (int a = 1000; a < 10000; a++)
	{
		b = a / 1000;
		c = (a / 100) % 10;
		d = (a / 10) % 10;
		e = a % 10;
		if (b == 3 || c == 3 || d == 3 || e == 3)
		{
			cout << a << endl;
		}
	}
}