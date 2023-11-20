#include <iostream> 
#include <string> 

using namespace std;

string str;
int n, i;
char c;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Количество строк N: " << endl;
    cin >> n;
    cout << "Окончание C: " << endl;
    cin >> c;
    for (i = 0; i < n; i++)
    {
        cout << "Введите строку" << endl;
        cin >> str;
        if (str[str.size() - 1] == c)
        {
            cout << "Верно" << endl;
        }
        else 
        {
            cout << "Не верно" << endl;
        }
    }
}