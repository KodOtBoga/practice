#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int h, m;
	cin >> h;
	cin >> m;
	h = h * 30;
	m = m * 6;
	double result = abs(h - m);
	if (result > 180)
	{
		result = result - 180;
	}
	cout << result << endl;
}