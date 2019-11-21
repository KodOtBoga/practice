#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (a > 99 && b > 99)
	{
		a = a * 1000 + b;
		cout << a << endl;
	}
	else {
		cout << "cin 3 DEGREE numbers" << endl;
	}
}