#include <iostream>

using namespace std;

long long i, u, m, q, o, p, sum=0, a[10], j;

int main()
{
    for (i = 1000; i <= 9999; i++) {
        u = i;
        m = i;
        if (u % 2 == 0) {
            if (u % 7 == 0) {
                if (u % 11 == 0) {
                    while (m != 0) {
                        q = m % 10;
                        a[q]++;
                        m /= 10;
                    }
                }
            }
        }
        for (j = 0; j <= 9; j++) {
            if (a[j] != 0)p++;
            sum += a[j] * j;
            a[j] = 0;
        }
        if (p == 2 && sum == 30)cout << i << endl;
        p = 0;
        sum = 0;
    }
    return 0;
}