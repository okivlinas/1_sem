#include <iostream>
#include <algorithm>

using namespace std;

long long i, n, a[101], b[101], z[101], mn=1;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите N: "; cin >> n;
    cout << "A: ";
    for (i = 0; i < n; i++)cin >> *(a + i);
    cout << "B: ";
    for (i = 0; i < n; i++)cin >> *(b + i);
    cout << "Искомый массив: ";
    for (i = 0; i < n; i++) {
        *(z + i) = *(a + i) + *(b + i);
    }
    for(i = 0; i < n; i++)cout << *(z + i) << " ";

    cout << endl << "Введите N: "; cin >> n;
    cout << "Введите последовательность: ";
    for (i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > mn)
        {
            cout << mn << endl;
            return 0;
        }
        if (*(a + i) == mn)mn++;
    }
    cout << mn << endl;
}