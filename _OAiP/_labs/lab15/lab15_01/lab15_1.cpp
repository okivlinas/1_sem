#include <iostream>

using namespace std;

int n, sa, ans;

int main()
{
	cin >> n;
	int* ptr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		cin >> *(ptr + i);
		sa += *(ptr + i);
	}
	sa /= n;
	for (int i = 0; i < n; i++) {
		if (*(ptr + i) > sa)ans++;
	}
	cout << ans << endl;
	free(ptr);
}