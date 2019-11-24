#include <iostream>
using namespace std;
int main()
{
	double a, b, d;
	double c;
	cin >> a >> b;
	c = b / 100;
	d = a * c;
	for (int i = 0; i < 5; i++) {
		a += d;
	}
	cout << a;
}


