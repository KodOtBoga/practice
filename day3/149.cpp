#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int main() {
	srand(time(0));
	int size = rand() % 10 + 3;
	char line[size];
	for (int i = 0; i < size; i++) {
		line[i] = (char)(rand() % 26 + 'a');
	}

	for (int i = 0; i < 1; i++) {
		int a = rand() % size;
		int b = rand() % size;

	check:
		if (b == a) {
			b = rand() % size;
			goto check;
		}


		line[a] = '!';
		line[b] = '!';
	}

	for (int i = 0; i < size; i++) {
		cout << line[i] << " ";
	}
	return 0;
}