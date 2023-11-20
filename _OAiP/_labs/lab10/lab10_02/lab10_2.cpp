#include <iostream>

using namespace std;

const long long N = 1001;
long long n, a[N], ans, i;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите количество элементов: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] != 0)
		{
			if (a[i - 1] == a[i])ans++;
		}
	}
	cout << "Кол-во пар одинак. элементов: " << ans << endl;
	return 0;
}