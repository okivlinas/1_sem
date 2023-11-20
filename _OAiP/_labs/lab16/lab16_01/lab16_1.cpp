#include <iostream>
#include <string>

using namespace std;

int ans, anss;

int zad1(int n, int m, int d)
{
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == d)ans = i + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return ans;
}

int zad2(string s)
{
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            anss += int(s[i]);
        }
    }
    return anss;
}

int main()
{
    setlocale(LC_CTYPE, "Russian");

    int rows, cols, d, cas;
    string s;

    cout << "Выберите № задания: ";
    cin >> cas;
    switch (cas) {
        case 1: {
            cout << "n,m: ";
            cin >> rows >> cols;
            cout << "d: ";
            cin >> d;
            cout << zad1(rows, cols, d) << endl;
            break;
        }
        case 2: {
            cin.get();
            getline(cin, s);
            cout << zad2(s) << endl;
            break;
        }
    }
}