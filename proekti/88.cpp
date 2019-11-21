#include <iostream>
using namespace std;

int main()
{
	int total = 1;
	for (int i = 5; i <= 12; i++)
	{
		total = total * i;
		cout << i << "*";
	}
	total = total * 13;
	cout << 13 << "=" << total;

	return 0;
}
