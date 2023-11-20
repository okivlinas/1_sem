#define _CTR_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int mask = 240, maskk = 1, maskkk = 1;
int a = 189, b = 200, n, m, i, p, q;
char tmp[101];

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    cout << "a\t";
    _itoa_s(a, tmp, 2);
    cout << tmp << endl;
    cout << "b до\t";
    _itoa_s(b, tmp, 2);
    cout << tmp << endl;
    mask = mask & a;
    cout << "b после\t";
    b = b << 4;
    mask = mask >> 4;
    b = b | mask;
    _itoa_s(b, tmp, 2);
    cout << tmp << endl;

    mask = 204;
    _itoa_s(a, tmp, 2);
    cout << "a до\t" << tmp << endl;
    a = a | mask;
    _itoa_s(mask, tmp, 2);
    cout << "a изм\t" << tmp << endl;
}