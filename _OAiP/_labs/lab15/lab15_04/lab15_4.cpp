#include <iostream>

using namespace std;

int n, sa, ans, i;

int main()
{
	cin >> n;
	int* ptr = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)cin >> ptr[i];
	for (i = 0; i < n; i++)if (ptr[i] < 0)ans = i;
	cout << ans << endl;
	free(ptr);
}