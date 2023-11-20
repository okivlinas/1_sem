#include <iostream>

using namespace std;

int* squareElement(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) {
            arr[i] *= arr[i];
        }
    }

    return arr;
}

int show(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int near(int* arr, int n)
{
    int* razn = new int[n];
    int sumAfter = 0;
    int sumBefore = 0;
    int min = 1000;
    int minIndex;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sumAfter += arr[i];
        }
        for (int j = i - 1; j > 0; j--)
        {
            sumBefore += arr[i];
        }

        razn[i] = sumAfter - sumBefore;
        sumAfter = 0;
        sumBefore = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int elem = razn[i] * -1;

        if (min > elem)
        {
            min = razn[i];
            minIndex = i;
        }
    }

    return minIndex;
}


int main()
{
    setlocale(LC_ALL, "rus");

    int n;

    cin >> n;

    int* firstArray = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> firstArray[i];
    }

    int* newArray = squareElement(firstArray, n);
    show(newArray, n);

    cout << endl;

    cout << near(newArray, n) << endl;
}


