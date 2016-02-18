#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double degrees=0, minutes=0; // ��������� ��� ��������� ���� � ���������
	int k1, k2, b1, b2, buf=0, precision = 2;

	cout << "Vvedite k1, b1; k1, b2: ";
	cin >> k1 >> b1 >> k2 >> b2;

	degrees = ((k2 - k1)*1.0 / (1 + k1*k2)*1.0); // ����� ������� �� �����. �������
	degrees = atan(degrees);                      // �������� � ��������� ����  
	degrees = degrees * 180/ 3.14159265; // ��������� ������� � �������
	
	buf = int(degrees);
	minutes = int ((0.6 * (degrees - buf))*pow(10, precision)) ;   //���� ������� ����� ��������, �������� �� 3/5 (�� ��������� ����� � ��������)
	degrees = buf;                      // ����� �������, ������� ������. ����� ������� ������� � ������ ����, ������� ����� ��� �� �����

	cout << degrees << " graduvos, " << minutes << " minut." << endl;

	system("pause");
	return 0;
}