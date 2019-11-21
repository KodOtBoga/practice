#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int day1, month1, year1;
	cin >> day1 >> month1 >> year1;

	int day2, month2, year2;
	cin >> day2 >> month2 >> year2;
	if (year2 > year1 || (year1 == year2 && month2 > month1) || (year1 == year2 && month2 == month1 && day2 > day1))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}