#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	e = c / 6;
	f = d / 3;
	if (a + b > 5 || c == e * 6 || d == f * 3)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}