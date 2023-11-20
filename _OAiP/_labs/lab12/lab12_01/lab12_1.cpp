#include <iostream>

long long bb, mm, rr, z;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, k, a[101];
	int b[101], m[101], r[101];
	cout << "Введите кол-во элементов N и число K: ";
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> *(a+i);
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > k)*(b+bb) = i, bb++;
		if (*(a + i) == k)*(r + rr) = i, rr++;
		if (*(a + i) < k)*(m + mm) = i, mm++;
	}
	cout << ">: ";
	for (int i = 0; i < bb; i++)cout << *(b + i) << " ";
	cout << endl << "==: ";
	for (int i = 0; i < rr; i++)cout << *(r + i) << " ";
	cout << endl << "<: ";
	for (int i = 0; i < mm; i++)cout << *(m + i) << " ";
	cout << endl;

	cout << "Введите число N и число K: ";
	cin >> n >> k;
	int aa[101], q, l;
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
}
