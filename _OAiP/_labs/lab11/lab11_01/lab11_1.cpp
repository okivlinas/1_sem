#define _CTR_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int mask = 240,maskk=1, maskkk=1;
int a = 150, b = 200, n, m, i, p, q;
char tmp[101],tmpp[101];

int main()
{
    using namespace std;
    cout << "a\t";
    _itoa_s(a, tmp, 2);
    cout << tmp << endl;
    cout << "b\t";
    _itoa_s(b, tmp, 2);
    cout << tmp << endl;
    mask = mask & a;
    cout << "mask\t";
    _itoa_s(mask, tmp, 2);
    cout << tmp << endl;
    cout << "b\t";
    b = b << 4;
    mask = mask >> 4;
    b = b | mask;
    _itoa_s(b, tmp, 2);
    cout << tmp << endl;



    a = 100;
    b = 114;
    cout << endl << endl << "a\t";
    _itoa_s(a, tmpp, 2);
    cout << tmpp << endl;
    cout << "b\t";
    _itoa_s(b, tmpp, 2);
    cout << tmpp << endl;
    cout << "n,p: ";
    cin >> n >> p;
    maskk = (maskk << n) - 1;
    maskk = (maskk << p-1);
    cout << "!a\t";
    a = a | maskk;
    _itoa_s(a, tmpp, 2);
    cout << tmpp << endl;
    mask = 1;
    cout << "m,q: ";
    cin >> m >> q;
    maskkk = (maskkk << m) - 1;
    maskkk = (maskkk << q-1);
    //_itoa_s(maskkk, tmpp, 2);
    //cout << tmpp << endl;
    cout << "!b\t";
    b = b | maskkk;
    _itoa_s(b, tmpp, 2);
    cout << tmpp << endl;
}