#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a, xz, eps;
	int p;
	cin >> a >> p >> xz >> eps;
	double x = pow(a, 1.0 / p);
	double xn = xz, x_prev = -10000000;
	int i = 0;
	while (fabs(xn - x_prev) >= eps)
	{
		x_prev = xn;
		xn = (x_prev / (p*p))*((p*p - 1) + 0.5*(p + 1)*a / (pow(x_prev, p)) - 0.5*(p - 1)*pow(x_prev, p) / (a));
		i++;
	}
	cout << i << ' ' << xn << ' ' << x << endl;
	cin >> a;
	return 0;
}