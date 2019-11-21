#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int napr = 0;
	cin >> napr;
	string where;
	if (napr > 10 && napr < 15)
	{
		int b;
		cin >> b;

		switch (b) {
		case -1: {
			if (napr == 11)
			{
				napr = 14;
			}
			else
			{
				napr -= 1;
			}
			break;
		}
		case 0: {
			break;
		}
		case 1: {
			if (napr == 14)
			{
				napr = 11;
			}
			else
			{
				napr += 1;
			}
			break;
		}

		default:
		{
			break;
		}

		}
		cout << napr << endl;
		switch (napr) {
		case 11: {
			where = "North";
			break;
		}
		case 12: {
			where = "West";
			break;
		}
		case 13: {
			where = "South";
			break;
		}
		case 14: {
			where = "East";
			break;
		}
		default:
		{
			break;
		}

		}
		cout << where << endl;
	}

	else {
		cout << "NOT CORRECT NUMBER" << endl;
	}

}
}