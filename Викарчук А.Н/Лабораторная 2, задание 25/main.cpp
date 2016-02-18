#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int factorial(int l)
{
	int k = 1;
	for (int j = 0; j < l; j++)
		k *= j + 1;
	return k;
}

int main()
{
	int n = 0;
	float e = pow(10, -4), y=0.0, x = 0.0;

	cout << "Enter x: ";
	cin >> x;
	x *= M_PI / 180.0;
	for (int i = 0; i < 29; i++) //1
	{
		y += cos(pow(x, i + 1));
	}
	cout << "Sum is: " << y << endl;
	y = 0;

	cout << "Enter n: ";   //2
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		y += factorial(i+1);
	}
	cout << y << endl;
	y = 0;

	for (double i = 1.0; i <= 2.0; i += 0.1) //3
	{
		y += (float)sin(i);
	}
	cout << y << endl;

	y = sin(x);

	while (y >= e) //4
	{
		y = sin(y);
	}
	cout << setprecision(8) << y << endl;

	system("pause");

	return 0;
}