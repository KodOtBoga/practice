#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int day;
	cin >> day;
	int month;
	cin >> month;
	int year;
	cin >> year;
	int max;


	switch (month) {
	case 1: {
		max = 31;
		break;
	}
	case 2: {
		max = 28;
		break;
	}
	case 3: {
		max = 31;
		break;
	}
	case 4: {
		max = 30;
		break;
	}

	case 5: {
		max = 31;
		break;
	}
	case 6: {
		max = 30;
		break;
	}
	case 7: {
		max = 31;
		break;
	}
	case 8: {
		max = 31;
		break;
	}
	case 9: {
		max = 30;
		break;
	}
	case 10: {
		max = 31;
		break;
	}
	case 11: {
		max = 30;
		break;
	}
	case 12: {
		max = 31;
		break;
	}
	default:
	{
		break;
	}
	}
	if (day > max || day < 0 || month < 0 || month > 12)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Yes" << endl;
	}
}