#include <iostream>

using namespace std;

long double i, x, t, y, tt, mn = 1e9;

int main()
{
    for (i = 0; i < 5; i++) {
        cin >> x;
        if (x < mn)mn = x;
    }
    for (i = 0.5; i <= 3; i += 0.5) {
        t = i;
        if (t <= 2) {
            tt = pow(t, 2);
            y = cos(tt);
        }
        else {
            y = mn;
        }
        cout << y << endl;
    }
    return 0;
}