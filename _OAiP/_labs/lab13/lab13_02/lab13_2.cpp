#include <cstring>
#include <iostream>
using namespace std;

void main()
{
    char str[51];
    int i, n, j;
    char* pc;
    gets_s(str);
    for (n=0, pc = str; *pc != 0; pc++)
    {
        if (*pc >= '1' && *pc <= '9')n++;
    }
    cout << n << endl;
}
