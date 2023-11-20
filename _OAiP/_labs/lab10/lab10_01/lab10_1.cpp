#include <iostream>
#include <ctime>

using namespace std;

const int N = 100;
long long a[N], i, n, rmn = 0, rmx = 99, mn=100, j, m, ans, b[N];

int main()
{
    setlocale(LC_CTYPE, "Russian");
    srand((unsigned)time(NULL));
    cout << "Введите количество элементов массива: ";
    cin >> n;
    m = n;
    cout << "Массив a[]: " << endl;
    for (i = 0; i < n; i++)
    {
        a[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
        if (a[i] < mn)mn = a[i];
        cout << a[i] << " ";
        ans += a[i];
    }
    //a[0] = mn;
    cout << endl;
    cout << "Отредактированный массив a[]: " << endl;;
    for (i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            for (j = i; j < n; j++)a[j] = a[j + 1];
            m--;
        }
    }
    for (i = m - 1; i >= 0; i--)
    {
        a[i + 3] = a[i];
    }
    for (i = 0; i < 3; i++)a[i] = ans/n;
    for (i = 0; i < m+3; i++)cout << a[i] << " ";
    cout << endl << endl << "Введите количество элементов массива: ";
    cin >> n;
    cout << "Массив b[]: " << endl;
    for (i = 0; i < n; i++)
    {
        b[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
        cout << b[i] << " ";
    }
    cout << endl;
    reverse(b, b + n);
    cout << "Отредактированный массив b[]: " << endl;
    for(i = 0; i < n; i++)cout << b[i] << " ";
    cout << endl;
    return 0;
}