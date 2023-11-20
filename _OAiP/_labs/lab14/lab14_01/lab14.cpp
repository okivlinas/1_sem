#include <iostream>

const int N = 9, M = 9;
int a[N][M], imax, imin, jmax, jmin, mx=-1e9, mn=1e9, i, j, n, m;

int main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");

    cout << "Введите n,m: ";
    cin >> n >> m;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] >= mx)mx = a[i][j], imax = i, jmax = j;
            if (a[i][j] <= mn)
            {
                mn = a[i][j], imin = i, jmin = j;
            }
        }
    }
    swap(a[imax][jmax], a[imin][jmin]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
