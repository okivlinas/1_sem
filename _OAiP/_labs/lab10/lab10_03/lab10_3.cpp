#include <iostream>

using namespace std;

const long long N = 1001;
long long a[N], b[N], i, n, k, mx=-1e9, h, ans;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите количество элемнтов массива: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		b[a[i]]++;
		if (a[i] > mx)mx = a[i];
	}
	for (i = 0; i <= mx; i++)
	{
		if (b[i] != 0)ans++;
	}
	cout << "Кол-во различных элементов: " << ans << endl;
	return 0;
}