#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	if (a > 999)
	{
		int b, c, d;
		b = (a / 100) % 10;
		cout << b << endl;
		d = a % 10;
		cout << d << endl;
		c = (a % 100) / 10;
		cout << c << endl;
		a = a / 1000;
		cout << a << endl;
		int max = 0, min = 10;
		int mas[] = { a, b, c, d };
		for (int n = 0; n < 4; n++)
		{

			if (mas[n] > max)
			{
				max = mas[n];
			}
			if (mas[n] < min)
			{
				min = mas[n];
			}

		}
		for (int n = 0; n < 4; n++)
		{
			if (mas[n] == min)
			{
				cout << max;
				continue;
			}
			if (mas[n] == max)
			{
				cout << min;
				continue;
			}
			cout << mas[n];
		}
	}
	else {
		cout << "cin 4 DEGREE numbers" << endl;
	}
}