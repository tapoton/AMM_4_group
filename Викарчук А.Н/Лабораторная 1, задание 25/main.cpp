#include<iostream>
using namespace std;

int main()
{
	float dist, v1, v2, v3, t1, t2, t3;

	cout << "Vvedite v1,t1, ... , v3,t3: ";
	cin >> v1 >> t1 >> v2 >> t2 >> v3 >> t3;

	dist = v1*t1 + v2*t2 + v3*t3;

	cout << dist / 2 << " km." << endl;

	system("pause");

	return 0;
}