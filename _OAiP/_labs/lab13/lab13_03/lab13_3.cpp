#include <iostream> 
#include <windows.h> 

using namespace std;

char str[50] = "ABC DEF HIJ KLMO p", ch[25];
int w = 0, l = 0, i, j, ln;

void main() 
{
    setlocale(LC_ALL, "RUS");
    for (i = 0, ln = 0; i < strlen(str); i += l + 1, l = 0) {
        for (j = i; ; j++) {
            l++;
            if (str[j + 1] == ' ' || str[j + 1] == '\0') {
                w++;
                break;
            }
        }
        if (w % 2 == 1)
            continue;
        else
            for (j = i + l - 1; j >= i; j--, ln++) {
                ch[ln] = str[j];
                if (l - 1 == ln)
                    ch[++ln] = ' ';
            }
        if (w == 4) {
            ch[ln] = '\0';
        }
    }
    cout << ch << endl;
}