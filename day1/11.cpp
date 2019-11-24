#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x = -2.34;
	double result;
	result = ((abs(x - 5) - sin(x)) / 3) + sqrt(x * x + 2014) * cos(2 * x) - 3;
	cout << result;
}