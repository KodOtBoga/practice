#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "����������� ����������" << endl;
	}
	else {
		cout << "����������� �� ����������" << endl;
	}
}