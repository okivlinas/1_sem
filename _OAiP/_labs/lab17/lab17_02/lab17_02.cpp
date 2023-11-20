#include <iostream>
#include <iomanip>

using namespace std;


void v7_2()
{
    int n = 5;
    int m = 5;
    int matrix[5][5] = { {1, 2, -1, 3, 2}, {2, 3, 8, 10, 0}, {-12, -44, -30, -20, -1}, {12, 1, 2, 6, 3}, {1, 2, -1, 3, 2} };
    int sum = 0;
    bool isFind;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 0)
            {
                sum = 0;
                break;
            }
            else
                sum += matrix[i][j];
        }
        if (sum != 0)
            break;
    }
    sum /= m;
    cout << sum << endl << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            matrix[i][j] -= sum;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    v7_2();
    cout << endl;
}

