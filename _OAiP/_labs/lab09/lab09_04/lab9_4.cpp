#include <iostream>
#include <cmath>

using namespace std;

long double e = 0.0001, a, b, x;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Решение методом дихотомии: " << endl << endl;
    cout << "Введите a,b: ";
    cin >> a >> b;
    x = (a + b) / 2;
    if ((x * x * x + x - 4) * (a * a * a + a - 4) <= 0)b = x;
    else a = x;
    while (abs(a - b) > 2 * e) {
        x = (a + b) / 2;
        if ((x * x * x + x - 4) * (a * a * a + a - 4) <= 0)b = x;
        else a = x;
    }
    cout << x << endl;
    return 0;
}
