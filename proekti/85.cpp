#include <iostream>
using namespace std;

int main()
{

	int a;
	cin >> a;
	cout << "[[[[[[[[[[[[[[[" << "      " << "]]]]]]]]]]]]]]]" << endl;
	cout << "[::::::::::::::" << "      " << "::::::::::::::]" << endl;
	cout << "[::::::::::::::" << "      " << "::::::::::::::]" << endl;
	cout << "[::::::[[[[[[[:" << "      " << ":]]]]]]]::::::]" << endl;
	if (a % 2 == 0)
	{
		int b = a / 2 - 1;
		for (int i = 0; i < b; i++)
		{
			cout << "[:::::[" << "                      " << "]:::::]" << endl;
		}
		cout << "[:::::[" << "    CODE THE WORLD    " << "]:::::]" << endl;
		cout << "[:::::[" << "www.itmathrepetitor.ru" << "]:::::]" << endl;
		for (int i = 0; i < b; i++)
		{
			cout << "[:::::[" << "                      " << "]:::::]" << endl;
		}
	}
	else if (a == 1) {
		cout << "[:::::[" << "                      " << "]:::::]" << endl;
	}
	else if (a % 2 != 0)
	{
		cout << "[:::::[" << "                      " << "]:::::]" << endl;
		a -= 1;
		int b = a / 2 - 1;
		for (int i = 0; i < b; i++)
		{
			cout << "[:::::[" << "                      " << "]:::::]" << endl;
		}
		cout << "[:::::[" << "    CODE THE WORLD    " << "]:::::]" << endl;
		cout << "[:::::[" << "www.itmathrepetitor.ru" << "]:::::]" << endl;
		for (int i = 0; i < b; i++)
		{
			cout << "[:::::[" << "                      " << "]:::::]" << endl;
		}
	}
	cout << "[::::::[[[[[[[:" << "      " << ":]]]]]]]::::::]" << endl;
	cout << "[::::::::::::::" << "      " << "::::::::::::::]" << endl;
	cout << "[::::::::::::::" << "      " << "::::::::::::::]" << endl;
	cout << "[[[[[[[[[[[[[[[" << "      " << "]]]]]]]]]]]]]]]" << endl;

	return 0;
}