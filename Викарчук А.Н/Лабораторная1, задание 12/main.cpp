#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double degrees=0, minutes=0; // переменны для радианной меры и градусной
	int k1, k2, b1, b2, buf=0, precision = 2;

	cout << "Vvedite k1, b1; k1, b2: ";
	cin >> k1 >> b1 >> k2 >> b2;

	degrees = ((k2 - k1)*1.0 / (1 + k1*k2)*1.0); // нашли тангенс по матем. формуле
	degrees = atan(degrees);                      // перевели в радианную меру  
	degrees = degrees * 180/ 3.14159265; // переводим радианы в градусы
	
	buf = int(degrees);
	minutes = int ((0.6 * (degrees - buf))*pow(10, precision)) ;   //берём дробную часть градусов, умножаем на 3/5 (из пропорции минут к градусам)
	degrees = buf;                      // таким образом, получим минуты. Затем приведём градусы к целому типу, дробная часть уже не нужна

	cout << degrees << " graduvos, " << minutes << " minut." << endl;

	system("pause");
	return 0;
}