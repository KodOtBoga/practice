#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = 3.6;
	double sec = x - 2;
	double answer = exp(sec) + abs(sin(x)) - x * x * x * x * cos(1 / x);
	cout << answer << endl;
}