#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0.1;
	double b = 0.2;
	double x = 1;

	double per = pow((x * x + b), 1.0 / 5);
	double vto = ((b * b * pow(sin(x + a), 3)) / x);
	double answ = per - vto;
	cout << answ << endl;
}