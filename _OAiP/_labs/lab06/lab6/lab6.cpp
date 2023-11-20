#include <iostream>
#include <cmath>

using namespace std;

long double a, j, b, c, d, i, n, x = 4.5, y = 2, t = 6.96 * pow(10, -5), z, q, e;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	for (j = 0; j < 3; ++j)
	{
		cout << "Введите i: ";
		cin >> i;
		z = (t * pow(y, 2) - sqrt(i + x)) * tan(y);
		q = sqrt(pow(z, 2) + (5 * z)) * log(y);
		cout << "z: " << z << endl << "q: " << q << endl;
	}
	i = 1;
	cout << endl << endl;
	while (i < 2)
	{
		z = (t * pow(y, 2) - sqrt(i + x)) * tan(y);
		q = sqrt(pow(z, 2) + (5 * z)) * log(y);
		cout << "z: " << z << endl << "q: " << q << endl;
		i = i + 0.2;
		cout << endl;
	}
	cout << endl;
	for (e = 0; e < 3; ++e)
	{
		cout << "Введите x: ";
		cin >> x;
		i = 2;
		for (j = 0; j < 5; ++j)
		{
			z = (t * pow(y, 2) - sqrt(i + x)) * tan(y);
			q = sqrt(pow(z, 2) + (5 * z)) * log(y);
			cout << "z: " << z << endl << "q: " << q << endl;
			i += 0.2;
		}
		cout << endl;
	}
}
/*i = 2;
	do
	{
		cout << "Введите x: ";
		cin >> x;
		z = (t * pow(y, 2) - sqrt(i + x)) * tan(y);
		q = sqrt(pow(z, 2) + (5 * z)) * log(y);
		cout << "z: " << z << endl << "q: " << q << endl;
		i = i + 0.2;
		cout << endl;
	}
	while (i < 3.2);*/
	
