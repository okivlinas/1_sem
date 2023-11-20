#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 1.2, k = 3, x = 2.5, m = 4, v, w;
	while (m <= 6)
	{
		if (x < (m / 2)) {
			w = sqrt(0.2 * x) * k;
		}
		else {
			if (x >= (m / 2)) {
				w = exp(2 * x * k);
			}
		}
		v = sqrt(pow(w, 3) + abs(x - a)) / log(1 + a);
		cout << "v: " << v << "   w: " << w << endl;
		m += 0.2;
	}
}