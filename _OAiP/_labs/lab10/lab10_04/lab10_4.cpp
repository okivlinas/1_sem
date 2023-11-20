// lab10_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>

using namespace std;

const long long N = 1001;
long long ans, mx = -1e9, a[N], i, n;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите количество элементов: ";
    cin >> n;
    for (i = 0; i < n; i++)cin >> a[i];
    ans = 1;
    for (i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])ans++;
        else
        {
            if (ans > mx)mx = ans;
            ans = 1;
        }
    }
    if (ans > mx)mx = ans;
    cout << "Наибольшее кол-во подряд идущих: " << mx << endl;
    return 0;
}