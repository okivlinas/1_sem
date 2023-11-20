#include <cstring>
#include <iostream>
using namespace std;

void main()
{
    char str[51];
    int i, n, j;
    gets_s(str);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] == 'a')
        {
            for (j = n; j > i; j--)
            {
                str[j] = str[j - 1];
            }
            str[i + 1] = '!';
            n++;
        }
    }
    for (i = 0; i < n; i++)cout << str[i];
}
