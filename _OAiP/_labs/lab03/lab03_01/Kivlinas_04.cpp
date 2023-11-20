#include <iostream>
void main()
{
	double t, u, k=4, x=2*pow(10,-4), a=8.1;
	t = (2 * k / a) + log(2 + x);
	u = (sqrt(k - 1)) / (t + 1);
	std::cout << "t=" << t;
	std::cout << "u=" << u;

	double s = 1.4, m = 6, z = 0.05 * pow(10, -5), y, w;
	y = sqrt(1 + s) - cos(2 / m);
	w = (0.6 * z) - (2 * exp(-2 * y * m));
	std::cout << "y=" << y;
	std::cout << "w=" << w;
}

