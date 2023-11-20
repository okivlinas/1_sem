#include <iostream>

long long a, b, c, n, i, ans;

int main()
{
    using namespace std;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (i == 0 && a < 0)c = -1;
        else if (i == 0)c = 1;

        if (i != 0)
        {
            if (a >= 0 && c == -1)ans++, c = 1;
            else if (a < 0 && c == 1)ans++, c = -1;
        }
    }
    cout << ans << endl;
}