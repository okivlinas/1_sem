#include <iostream>

using namespace std;

long long i, n, ans, x;

int main()
{
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if (x < 0)ans = i + 1;
    }
    cout << ans << endl;
    return 0;
}