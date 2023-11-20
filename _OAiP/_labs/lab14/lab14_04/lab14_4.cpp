#include <iostream>
#include <iomanip>

using namespace std;

const int N = 9;
long long i, j, m, n, k = 1, b[N], d[N], ii, jj, mx = -1e9;
long double a[N][N], c[N][N];

int main()
{
	cout << fixed << setprecision(2);
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите n: ";
	cin >> n;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)cin >> a[i][j];
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] > mx && c[i][j] != 101)
				{
					mx = a[i][j], ii = i, jj = j;
				}
			}
		}	
		b[k] = ii, d[k]=jj, c[ii][jj] = 101;
		mx = -1e9;
	}
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				swap(a[k][k], a[b[k]][d[k]]);
			}
		}
		
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}