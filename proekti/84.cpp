#include <iostream>
using namespace std;

int main()
{

	double a;
	cin >> a;
	double b = 20;
	for (int i = 1; i <= 100; i++)
	{
		cout << i << " " << i * a << " " << (a * i) / b << endl;
	}

	return 0;
}