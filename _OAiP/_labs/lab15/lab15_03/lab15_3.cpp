#include <iostream>

using namespace std;

int r, c, a, i, j, o, n;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	cout << "Введите размеры матрицы: ";
	cin >> r >> c;
	int** ptr = new int*[r];
	for (i = 0; i < r; i++) {
		ptr[i] = new int[c];
	}
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)cin >> ptr[i][j];
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (ptr[i][j] == 0)o = 1;
		}
		if (o != 1)n++;
		o = 0;
	}
	cout << n << endl;

}