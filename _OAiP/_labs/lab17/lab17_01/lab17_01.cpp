#include <iostream>

using namespace std;

long long ans,fl;

int fun1();
int fun2(int**, int, int);

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int sw;
	cin >> sw;

	int fun1();
	int fun2(int **mass, int n, int m);

	switch (sw) {
		case 1: {
			cout << fun1() << endl;
			break;
		}
		case 2: {
			int a, b;
			cout << "a,b: ";
			cin >> a >> b;
			int** arr = new int* [a+1];
			for (int i = 0; i < a+1; i++) {
				arr[i] = new int[b+1];
			}
			for (int i = 0; i < a; i++) {
				for(int j = 0; j < b; j++) {
					cin >> arr[i][j];
				}
			}
			cout << fun2(arr, a, b) << endl;
			for (int i = 0; i < a+1; i++) {
				delete [] arr[i];
			}
			delete [] arr;
			break;
		}
	}
}

int fun1() {
	srand(time(NULL));
	int *mass = new int[16];
	int ans = 1;
	const int pp = 15;
	for (int i = 0; i < pp; i++) {
		*(mass+i)= 1 + rand() % 200;
	}
	for (int i = 0; i < pp; i++) {
		if (*(mass + i) >= 2 && *(mass + i) <= 7) {
			ans *= *(mass + i);
		}
	}
	delete [] mass;
	return ans;
}
int fun2(int** mass, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mass[j][i] < 0)fl++;
		}
		if (fl == n) {
			for (int j = 0; j < n; j++)ans += mass[j][i];
		}
		fl = 0;
	}
	ans /= n;
	return ans;
}