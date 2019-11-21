#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > 99 && b > 99)
	{
		int c, d;
		c = (a % 100) / 10;
		d = (b % 100) / 10;
		b = b / 100;
		a = a / 100;
		int mas[] = { a, c, b, d };
		int mas2[4];
		int l = 0;
		for (int n = 0; n < 4; n++)
		{

			cout << mas[n];


		}

	}
	else {
		cout << "cin 4 DEGREE numbers" << endl;
	}
}