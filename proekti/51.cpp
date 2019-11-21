#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b == c || a + c == b || a == b + c)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}