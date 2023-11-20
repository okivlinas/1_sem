#include <iostream>

long long bb, mm, rr, z, n, k, j, i, mx=-1e9, ans;
const int d = 10;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;

	cout << "Введите число N и число M: ";
	cin >> n >> k;
	int aa[101], q, l, a1[101], a2[101];
	q = n;
	while (q != 0)
	{
		l = q % 10;
		if (l % k == 0)*(aa + z) = l, z++;
		q /= 10;
	}
	cout << "Кратные числа: ";
	for (int i = 0; i < z; i++)cout << *(aa + i) << " ";
	cout << endl;
	
	for (int i = 0; i < d; i++)cin >> *(a1 + i);
	for (int i = 0; i < d; i++)cin >> *(a2 + i);
	for (int i = 0; i < d; i++) {
		if (*(a1 + i) > mx);
		{
			for (j = 0; j < d; j++) {
				if (*(a1 + i) == *(a2 + j))break;
			}
			if (j == d)ans = *(a1 + i);
		}
	}
	cout << "Искомое число: " << ans << endl;
}
