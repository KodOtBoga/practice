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
		b = (a % 1000) / 100;
		c = (a % 100) / 10;
		d = a % 10;
		a = a / 1000;
		int mas[] = { a, b, c, d };
		int mas2[4];
		int l = 0;
		for (int n = 0; n < 4; n++)
		{
			if (mas[n] < 5)
			{
				cout << mas[n];
			}
			else {
				mas2[l] = mas[n];
				l++;
			}
		}
		for (int n = 0; n < 4; n++)
		{
			if (mas[n] >= 5)
			{
				cout << mas[n];
			}
			else {
				continue;
			}
		}
	}
	else {
		cout << "cin 4 DEGREE numbers" << endl;
	}
}