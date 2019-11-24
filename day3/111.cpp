#include <iostream>
using namespace std;
int main() {
	char a = 'A', b = 'B';
	int n;
	cin >> n;
	for (int j = 0; j < 2 * n; j++)
	{
		cout << a;
	}
	cout << endl;
	for (int i = 0; i < n - 2; i++) {
		cout << a;
		for (int j = 0; j < (2 * n) - 2; j++)
		{
			cout << b;
		}
		cout << a;
		cout << endl;
	}
	for (int j = 0; j < 2 * n; j++)
	{
		cout << a;
	}
	return 0;
}