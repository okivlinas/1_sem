#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long long n = 7, i;
long double a[1001], b[1001], c[1001], sum;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите элементы массива a[i]: ";
    for (i = 1; i < n; i++)cin >> a[i];
    cout << "Введите элементы массива b[i]: ";
    for (i = 1; i < n; i++)cin >> b[i];

    for (i = 0; i < n; i++) {
        c[i] = sqrt(a[i] + b[i]);
        sum += (c[i] / (i+1));
    }
    cout << sum << endl;
    return 0;
}