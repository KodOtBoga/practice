#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double x, y;
	cin >> x >> y;

	double z = sqrt(x - sqrt(y));

	if (z >= 0) cout << z;
	else cout << "NO ROOTS";

	return 0;
}




