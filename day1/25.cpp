#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int week, month, year;
	cin >> week;
	cin >> month;
	cin >> year;

	cout << week * 7 + month * 30 + year * 365 << endl;
}


