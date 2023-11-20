#include <iostream>

using namespace std;

long long i, x, ans, n;

int main()
{
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0)ans += x;
    }
    cout << ans << endl;
    return 0;
}