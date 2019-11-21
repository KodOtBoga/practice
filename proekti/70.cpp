#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[2];
	int b[2];
	int c[2];
	int d[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> c[i];
	}
	if (a[1] == b[1] && c[0] == a[0])
	{
		int dis = a[0] - b[0];
		d[0] = c[0] - dis;
		d[1] = c[1];
		cout << d[0] << " " << d[1] << endl;
	}
	else {
		cout << "Not correct" << endl;
	}
}