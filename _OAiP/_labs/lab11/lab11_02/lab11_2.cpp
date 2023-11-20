#define _CTR_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int mask = 170, maskk = 1, maskkk = 1;
int a = 150, b = 200, n, m, i, p, q;
char tmp[101], tmpp[101];

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    _itoa_s(a, tmp, 2);
    cout << "a\t" << tmp << endl;
    a = a | mask;
    _itoa_s(mask, tmp, 2);
    cout << "!a\t" << tmp << endl;

    a = 100;
    cout << endl << "До\t";
    _itoa_s(a, tmpp, 2);
    cout << tmpp << endl;
    cout << "n,m: ";
    cin >> n >> p;
    maskk = (maskk << n) - 1;
    maskk = (maskk << p - 1);
    cout << "Изм\t";
    a = a | maskk;
    _itoa_s(a, tmpp, 2);
    cout << tmpp << endl;
}