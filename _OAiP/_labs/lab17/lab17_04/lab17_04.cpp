
#include <iostream>

using namespace std;

int main()
{
    const int n = 3, m = 2;
    int i = 0, j = 0, c = 0, k = 0;
    int A[n][m] = { {1, 1}, {5, 2}, {-2, 4} };


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cout << "\n massiv A= [" << i << "," << j << "] =" << A[i][j];
    cout << " " << endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i][j] < 0) {
                cout << "i=" << i << "\n";
                c = i;
            }
    for (int c = 0; c < n; c++)
        for (int j = 0; j < m; j++)
            A[c][j] /= 2;
    cout << "\n new_massiv A = [" << c << ", " << j << "] = " << A[c][j];
    return 0;
}
