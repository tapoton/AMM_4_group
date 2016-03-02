#include <iostream>
using namespace std;

int main ()
{
    cout<<"Enter n"<< endl;
    int n;
    cin >> n;
    cout << "Enter x1, y1" << endl;
    double x, y, left, right;
    cin >> left >> right;
    for (int i=2; i<=n; i++)
    {
        cout << "Enter x"<< i <<", y"<< i << endl;
        cin >> x >> y;
        if(x<y)
        {
            if (x>left) left = x;
            if (y<right) right = y;
        }
    }
    if (left<right)
    {
        cout << "The intersection is ["<< left<<", "<< right<<"]"<< endl;
    }
    else
    {
        cout << "No intersection" << endl;
    }
    return 0;
}
