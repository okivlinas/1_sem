#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	long long n, m, p, ans=0, i,y;
	cout << "Введите n, m: ";
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		p = i;
		while (p!=0)
		{
			ans += p % 10;
			p /= 10;
		}
		if ((ans*ans) == m)cout << i << endl;
		ans = 0;
	}
	return 0;
}