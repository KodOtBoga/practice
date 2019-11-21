#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int x;
	if ((b * b - 4 * a * c) >= 0)
	{
		x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "Первый корень равен " << x << endl;
		x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "Второй корень равен " << x << endl;
	}
	else {
		cout << " D < 0 " << endl;
	}
}