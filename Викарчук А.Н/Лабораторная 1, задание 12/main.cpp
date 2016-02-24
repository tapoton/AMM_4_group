#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // нет необходимости создавать переменные раньше, чем они вам понадобятся
    // то есть по сути вам достаточно было объявить только переменную sum
	float sum=10000, growth = 0, sumbuf=0, growthsum=0;
    
    // не бойтесь давать переменным более осмысленные, хоть и длинные имена.
    // flag1 и flag2 не дают понимания того, для чего они будут использованы.
	bool flag1 = false, flag2 = false;

	for (int i = 0; i < 12; i++)
	{
        // вместо комбинирования переменных sumbuf и growth достаточно было использовать только переменную growth
        // growth = sum * 0.2;
        // а новую сумму можно получить, прибавив к старой прирост
		sumbuf = sum;
		sum *= 1.02;
		cout << "Summa vklada za " << i + 1 << " mesyats ot marta: " << sum << endl;
		if (i < 10)
		{
			growth = sum - sumbuf;
			growthsum += growth;
			cout << "Prirost( " << i+1 << " mesyats):" << growth << ";";
            
            // вход в данное условие не произойдёт, поскольку месячный прирост не
			if ((growth > 300) && (flag1 == false))
			{
				cout << endl << i + 1 << " mesyats, velichina prirosta previsila 300" << endl;
				flag1 = true;
			}
		}
        // если бы сумма привысила 1200 руб. позже, чем через 12 месяцев, тело условия так же не воспроизвелось бы
		if ((growthsum > 1200) && (flag2 == false))
		{
			cout << endl << "Spystya " << i + 1 << " mesyatsev velichina vklada previsila 1200." << endl;
			flag2 = true;
		}
	}


	system("pause");
	return 0;
}