#include <iostream>
using namespace std;
int main() {
	int a = 100;
	for (int i = 0; i < 100; i++) {
		a = a - 4;
		if (a >= 0)
		{
			cout << a << " ";
		}
		else {
			break;
		}
	}
	return 0;
}