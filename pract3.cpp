#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");

	const int x = 3;
	const int y = 5;
	double array[x][y];
	double sredne[x];


	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < x; i++) {
		double sum = 0;
		for (int j = 0; j < y; j++) {
			sum += array[i][j];
		}
		sredne[i] = sum / x;
	}

	for (int i = 0; i < x; i++) {
		cout << "<--------------------------------------------->" << endl;
		cout << "Средне арифмитическое значение элементов строк: " << i << ":" << sredne[i] << endl;

	}

}
