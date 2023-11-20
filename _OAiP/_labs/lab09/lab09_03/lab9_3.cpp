#include <iostream>
#include <cmath>

using namespace std;

long double a, b, h, s, n = 200, x, s1, s2, i;

int main() {
	setlocale(LC_CTYPE, "Russian");
	cout << "Решение методом трапеций: " << endl << endl;
	cout << "Введите значение a,b: ";
	cin >> a >> b;
	h = (b - a) / n;
	x = a;
	s = 0;
	s = s + h * ((exp(x) + 6) + (exp(x + h) + 6)) / 2;
	x = x + h;
	while (x <= (b - h)) {
		s = s + h * ((exp(x) + 6) + (exp(x + h) + 6)) / 2;
		x = x + h;
	}
	cout << s << endl;
	cout << "Решение методом парабол: " << endl << endl;
	cout << "Введите значение a,b: ";
	cin >> a >> b;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
	s2 += (exp(x) + 6);
	x = x + h;
	s1 += (exp(x) + 6);
	x = x + h;
	i = i + 1;
	while (i < n) {
		s2 += (exp(x) + 6);
		x = x + h;
		s1 += (exp(x) + 6);
		x = x + h;
		i = i + 1;
	}
	s = (h / 3) * ((exp(a) + 6) + 4 * (exp(a + h) + 6) + 4 * s1 + 2 * s2 + (exp(b) + 6));
	cout << s << endl;
	return 0;
}