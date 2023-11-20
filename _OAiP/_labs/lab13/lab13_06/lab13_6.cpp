#include <iostream>
#include <cstring>

char str[101], c;
int i, ans;

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	gets_s(str);
	cout << "Введите символ: ";
	cin >> c;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == c)ans++;
	}
	if (ans != 0)cout << "Да" << endl;
	else cout << "Нет" << endl;
	return 0;
}