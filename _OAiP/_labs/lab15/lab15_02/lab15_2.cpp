#include <iostream>

using namespace std;

int rows, cols, i, j, fl, ans, mx=-1e9, ans1, ar[101];

int main()
{
	cout << "x: ";
	cin >> rows;
	int** arr = new int* [rows];

	for (i = 0; i < rows; i++) {
		arr[i] = new int[rows];
	}
	for(i = 0; i < rows; i++) {
		for (j = 0; j < rows; j++) {
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < rows; j++) {
			if (arr[i][j] == 0)fl = 1;
			if (arr[i][j] > mx)mx = arr[i][j];
		}
		if (fl == 1)ans++;
		fl = 0;
	}
	cout << "ans:\t" << ans << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < rows; j++) {
			ar[arr[i][j]]++;
		}
	}
	for (i = 0; i <= mx; i++) {
		if (ar[i] == 1)ans1 = i;
	}
	cout << "ans1:\t" << ans1 << endl;
	for (i = 0; i < rows; i++) {
		delete [] arr[i];
	}
	delete [] arr;
}