#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a < 5 && b < 5 && c > 5) || (a < 5 && c < 5 && b > 5) || (b < 5 && c < 5 && a > 5))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}