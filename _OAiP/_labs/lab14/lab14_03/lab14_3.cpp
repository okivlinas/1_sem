#include <iostream>

using namespace std;

const int N = 9, M = 9;
long long a[N][M], i, j, m, n, k = 1;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите n: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if ((i + j + 1) <= n)a[i][j] = i + j + 1, k=1;
			else a[i][j] = k, k++;
		}
	}
	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}