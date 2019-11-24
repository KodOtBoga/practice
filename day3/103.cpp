#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, se;
	for (int i = 100; i < 999; i++) {
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		e = a * a * a + b * b * b + c * c * c;
		if (i == e)
			cout << i << endl;
	}
	return 0;
}