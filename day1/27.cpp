#include <iostream>
using namespace std;

int main() {
	int x, y, z;

	cin >> x >> y >> z;

	int a, b, c;

	a = x; b = y; c = z;

	x = a + b;
	y = c - a;
	z = a + b + c;

	cout << x << " " << y << " " << z;

	return 0;
}


