
#include <iostream>
using namespace std;
int main() {
	int n, max;
	cin >> n;
	max = n % 10;
	n = n / 10;
	while (n > 0) {
		if (n % 10 > max)
			max = n % 10;
		n = n / 10;
	}
	cout << max << endl;
	return 0;
}