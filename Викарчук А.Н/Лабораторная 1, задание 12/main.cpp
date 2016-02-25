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
	bool overgrowth_check = false, oversum_check = false;

	int i = 0;
	while ((overgrowth_check == false) || (oversum_check == false)) 
	{
        // вместо комбинирования переменных sumbuf и growth достаточно было использовать только переменную growth
        // growth = sum * 0.2;
        // а новую сумму можно получить, прибавив к старой прирост
		sum *= 1.02;
		i++;
		if(i < 12)
		{
			cout << "Summa vklada za " << i << " mesyats ot marta: " << sum << endl;
		}
		
		growth = sum * 0.02;
		growthsum += growth;
		
		if (i<10)
		{
			cout << "Prirost( " << i << " mesyats): " << growthsum << ";" << endl;
            
            // вход в данное условие не произойдёт, поскольку месячный прирост не
		}
		if ((growth > 300) && (overgrowth_check == false))
			{
				cout << endl << i << " mesyats, velichina prirosta previsila 300" << endl;
				overgrowth_check = true;
			}

        // если бы сумма привысила 1200 руб. позже, чем через 12 месяцев, тело условия так же не воспроизвелось бы
		if ((growthsum > 1200) && (oversum_check == false))
		{
			cout << endl << "Spystya " << i << " mesyatsev velichina vklada previsila 1200." << endl;
			oversum_check = true;
		}
	}


	system("pause");
	return 0;
}
