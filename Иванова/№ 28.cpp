#include<iostream> 
using namespace std;
int main()
{
	int n, m, count = 1;
	cout << "enter n" << endl;
	cin >> n;
	cout << "enter m" << endl;
	cin >> m;
	while (n != m)
	{
		if (n > m) n = n - m;
		else m = m - n;
		count++;
	}
	cout << count <<" squares ";
	system("Pause");
    return 0;

}