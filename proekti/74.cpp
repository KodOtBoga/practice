#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a > 1 && a < 180)
	{
		cout << 9 + a << endl;
	}
	else {
		cout << "Not correct number" << endl;
	}
}