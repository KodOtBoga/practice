#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double mass[2];
	int b = 0;
	for (int a = 0; a < 3; a++)
	{
		cin >> mass[a];
	}
	for (int a = 0; a < 3; a++)
	{
		if (mass[a] > 0)
		{
			b++;
		}
	}
	cout << b;
}