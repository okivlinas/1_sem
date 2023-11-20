#include <iostream>
#include <iomanip>

using namespace std;

long long a, b, c;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Год: ";
	cin >> a;
	if ((a % 100 == 0 && a % 400 != 0) || a % 4 != 0)
	{
		cout << "Год " << a << " является невисокосным!" << endl;
	}
	else cout << "Год " << a << " является високосным!" << endl;
	return 0;
}