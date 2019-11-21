#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	int corn1[2], corn2[2], dl1, sh1, dl2, sh2;
	cout << "Enter corner1" << endl;
	cin >> corn1[0];
	cin >> corn1[1];
	cout << "Enter corner2" << endl;
	cin >> corn2[0];
	cin >> corn2[1];
	cout << "Enter Length1" << endl;
	cin >> dl1;
	cout << "Enter Length2" << endl;
	cin >> dl2;
	cout << "Enter Width1" << endl;
	cin >> sh1;
	cout << "Enter Width2" << endl;
	cin >> sh2;
	int topl[2], topr[2], topb[2];
	topl[0] = corn1[0];
	topl[1] = corn1[1] + sh1;
	topr[1] = topl[1];
	topr[0] = topl[0] + dl1;
	topb[0] = corn1[0] + dl1;
	topb[1] = corn1[1];

	int topl2[2], topr2[2], topb2[2];
	topl2[0] = corn2[0];
	topl2[1] = corn2[1] + sh2;
	topr2[1] = topl2[1];
	topr2[0] = topl2[0] + dl2;
	topb2[0] = corn2[0] + dl2;
	topb2[1] = corn2[1];

	if (corn1[0] == corn2[0] && corn1[1] == corn2[1] && dl1 == dl2 && sh1 == sh2)
	{
		cout << "Yes" << endl;
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
		cout << "No" << endl;
	}
	if ((corn2[0] <= topr[0] && corn2[1] <= topr[1]) || (topb2[0] <= topl[0] && topb2[1] <= topl[1]) || (corn1[0] >= topr2[0] && corn1[1] <= topr2[1]) || (topb[0] <= topl2[0] && topb[1] <= topl2[1]) ||
		(corn1[0] <= topr2[0] && corn1[1] <= topr2[1]) || (topb[0] <= topl2[0] && topb[1] <= topl2[1]) || (corn2[0] >= topr[0] && corn2[1] <= topr[1]) || (topb2[0] <= topl[0] && topb2[1] <= topl[1]))
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}