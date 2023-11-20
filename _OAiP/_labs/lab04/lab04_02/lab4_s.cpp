#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, probel = ' ';
	cout << "Введите символ: ";
	cin >> c;
	cout << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c;
	cout << setw(10) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << c;
	cout << setw(12) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << c;
	cout << setw(14) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;

	float sqr, len, r;

	printf("Введите длину окружности: ");
	scanf_s("%f", &len);
	len /= 2;
	r = len / 3.14;
	sqr = pow(r, 2) * 3.14;
	printf("%f", sqr);
	printf("\n");

	cout << "Введите символ: ";
	cin >> c;

	cout << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;

	int a, b, c1, a1, b1;

	printf("a,b: ");
	scanf_s("%d%d", &a,&b);
	c1 = a;
	a = b;
	b = c1;
	printf("%d", a);
	printf(" ");
	printf("%d", b);
	printf("\n");
	
	printf("a1,b1: ");
	scanf_s("%d%d", &a1, &b1);
	swap(a1, b1);
	printf("%d", a1);
	printf(" ");
	printf("%d", b1);
	printf("\n");



	cout << "Введите символ: ";
	cin >> c;
	
	cout << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;

	int a2, b2, c3, ans;
	printf("a,b,c: ");
	scanf_s("%d%d%d", &a2, &b2, &c3);
	ans = 50 * a2 + 100 * b2 + 200 * c3;
	printf("ans: %d", ans);
	printf("\n");



	cout << "Введите символ: ";
	cin >> c;
	
	cout << setw(34) << setfill(probel) << probel;
	cout << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;

	int f;

	printf("Введите номер квартиры: ");
	scanf_s("%d", &f);
	if (f >= 1 and f <= 36)printf("1-й");
	if (f >= 37 and f <= 73)printf("2-й");
	if (f >= 74 and f <= 110)printf("3-й");
	if (f >= 111 and f <= 146)printf("4-й");

}	
