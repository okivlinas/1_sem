#include <iostream>
void main()
{
	double s = 1.4, m = 6, z = 0.05 * pow(10, -5), y, n;
	y = sqrt(1 + s) - cos(2 / m);
	n = (0.6 * z) - (2 * exp(-2 * y * m));
	std::cout << "y=" << y;
	std::cout << "w=" << n;

	double t, u, k = 4, d = 2 * pow(10, -4), g = 8.1;
	t = (2 * k / g) + log(2 + d);
	u = (sqrt(k - 1)) / (t + 1);
	std::cout << "t=" << t;
	std::cout << "u=" << u;

	double o,u1,y1=0.5,c1=1.4,x1=2*pow(10,-4);
	o = exp(c1 * x1) / y1 + 3;
	u1 = sqrt(pow(o, 3) - (0.1 * o));
	std::cout << "z=" << o;
	std::cout << "u=" << u1;

	double w, v, b = 40, x = 1.1, a = 5 * pow(10, 6);
	w = (a + b) * tan(x) / (x + 1);
	v = (1 / 2 * b) - (sqrt(w - (a * b)));
	std::cout << "w=" << w;
	std::cout << "v=" << v;
}