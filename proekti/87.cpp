#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	for (int i = 10; i <= 87; i++)
	{
		total += i;
		cout << i << "+";
	}
	total += 88;
	cout << 88 << "=" << total;

	return 0;
}
