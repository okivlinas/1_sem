#include <iostream>

using namespace std;

long long a, b, c, a1, b1, c1, e;

int main()
{
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    a1 = (a % 3 == 0) ? a : 0;
    b1 = (b % 3 == 0) ? b : 0;
    c1 = (c % 3 == 0) ? c : 0;
    e = a1 + b1 + c1;
    cout << ((e == 0) ? e : ("Error")) << endl;
    return 0;
}