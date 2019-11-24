#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = -2;
	int sec = 1;
	for (int a = 1; a <= 5; a++)
	{
		sec = sec * x;
	}
	int ans = abs(x) + sec;
	cout << ans << endl;
}
