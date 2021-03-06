#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

/*int factorial(int l)
{
	int k = 1;
	for (int j = 0; j < l; j++)
		k *= j + 1;
	return k;
}
*/
int main()
{
    float  y=0.0, x = 0.0;
    
    cout << "Enter x: ";
    cin >> x;
    x *= M_PI / 180.0;
    
    for (int i = 1; i < 30; i++) //1
    {
        y += cos(pow(x, i));
    }
    cout << "Sum is: " << y << endl;
    y = 0;
    
	int n = 0;
    cout << "Enter n: ";   //2
    cin >> n;
	int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        // факториал -- сама по себе функция, требующая довольно долгих вычислений при больших значений
        // зная, что в очередной итерации цикла вам будет нужен факториал числа на единицу больше предыдущего,
        // вы можете в значительной степени оптимизировать код, запоминая значение факториала текущей итерации в переменную
        // и умножая это значение на i в каждой новой итерации
        // P.S. Опять же, помните про то, что цикл можно начать с единицы
		factorial *= i;
		y += factorial;
    }
    cout << y << endl;
    y = 0;
    
    // легкое замечание, скорее придирка: обычно i -- все-таки переменная счетчика, то есть, целочисленная
    // и, увидев в довольно большом теле цикла переменную i, человек, читающий код, будет несколько дезориентирован
    for (double i = 1.0; i <= 2.0; i += 0.1) //3
    {
        y += (float)sin(i);
    }
    cout << y << endl;
    
    y = sin(x);
    
	float e = pow(10, -4);
    while (y >= e) //4
    {
        y = sin(y);
    }
    cout << setprecision(8) << y << endl;
    
    system("pause");
    
    return 0;
}
