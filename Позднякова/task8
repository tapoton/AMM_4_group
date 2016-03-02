#include <iostream>
#include <math.h>

using namespace std;

double Func (double x)
{
    double f= x + pow(x, 1/2) + pow(x, 1/3) - 2.5;
    return f;
}

int main ()
{
    const double E = pow(10, -5);
    double left, right, middle;
    left = 0.4;
    right = 1;
    while (fabs(left - right) > E)
    {
        middle = (left + right)/2;
        double f_left, f_middle;
        f_left= Func(left);
        f_middle= Func(middle);
        if (f_left*f_middle<0)
        {
            right= middle;
        } else
        {
            left= middle;
        }
    }
    middle = (left + right)/2;
    cout << "The root is " << middle << endl;
    return 0;
}
