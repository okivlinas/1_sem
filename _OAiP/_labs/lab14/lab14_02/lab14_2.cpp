#include <iostream>
#include <iomanip>

using namespace std;

const int N = 9, M = 9;
long long n, m, i, j, k, r=-1;
long double a[N][M];

int main()
{
	cout << fixed << setprecision(1);
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите n,m: ";
	cin >> n >> m;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)cin >> a[i][j];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] == 0)k++;
		}
		if (k == m && r == -1)r = i;
	}
	if (r == -1)
	{
		cout << "Error" << endl;
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (j == r)a[i][j] /= 2;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}