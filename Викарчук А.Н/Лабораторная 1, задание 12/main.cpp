#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float sum=10000, prirost = 0, sumbuf=0, prirostsum=0;
	bool flag1 = false, flag2 = false;

	for (int i = 0; i < 12; i++)
	{
		sumbuf = sum;
		sum *= 1.02;
		cout << "Summa vklada za " << i + 1 << " mesyats ot marta: " << sum << endl;
		if (i < 10)
		{
			prirost = sum - sumbuf;
			prirostsum += prirost;
			cout << "Prirost( " << i+1 << " mesyats):" << prirost << ";";
			if ((prirost > 300) && (flag1 == false))
			{
				cout << endl << i + 1 << " mesyats, velichina prirosta previsila 300" << endl;
				flag1 = true;
			}
		}
		if ((prirostsum > 1200) && (flag2 == false))
		{
			cout << endl << "Spystya " << i + 1 << " mesyatsev velichina vklada previsila 1200." << endl;
			flag2 = true;
		}
	}

	

	system("pause");
	return 0;
}