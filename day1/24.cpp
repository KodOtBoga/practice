#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int day, sum;
	cin >> day;
	cin >> sum;
	double skid;
	cin >> skid;
	double total = 0;
	for (int b = 0; b < day; b++)
	{
		total = total + (sum + 3 * b) * ((100 - skid) / 100);
	}
	cout << total;
}


