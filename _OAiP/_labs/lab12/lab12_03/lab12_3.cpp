#include <iostream>

long long i, j, n, m, k, l, a[1001], b[1001], mx=-1e9, c[1001], ans, fl;
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите N: "; cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> *(a + i);
        if (*(a + i) > mx)mx = *(a + i);
    }
    cout << "Введите M: "; cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> *(b + i);
        if (*(b + i) == mx)fl = 1;
    }
    if (fl == 1)cout << "Да, содержится!" << endl;
    else cout << "Нет, не содержится!";

    cout << "Введите N: "; 
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> *(a + i);
        c[*(a+i)]++;
    }
    for (i = 0; i < 1001; i++) {
        if (*(c + i) != 0)ans++;
    }
    cout << ans << endl;
}
