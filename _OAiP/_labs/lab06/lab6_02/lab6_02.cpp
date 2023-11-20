#include <iostream>
#include <algorithm>

using namespace std;

long long n, i, a[11];
string s;

int main()
{
    cin >> s;
    n = s.size();
    for (i = 0;i<n; ++i)
    {
        if (s[i] != '3' && s[i] != '6')cout << s[i];
    }
    cout << endl;
    return 0;
}
