#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	const int n = 55;     // n = (sqrt(8s+1)-1)/2  - формула, опр. кол-во чисел в последней скобке, исходя из n-кол-ва элементов
	int mas[n], sum=0, n_curr = 0, res=1;
	srand(time(0));

	for (int i = 0; i < n; i++)   // заполнение массива
	{
		mas[i] = 1 + rand() % 99;
		cout << mas[i] << " ";
	}
	cout << endl;

	n_curr = (sqrt(8*n + 1) - 1) / 2;
	for (int i = 1; i <= n_curr; i++)
	{
		for (int j = i*(i-1)/2+1; j < i*(i-1) / 2 + 1 + i; j++)
		{
			sum += mas[j-1];
		}

		res *= sum;
		sum = 0;
	}

	cout << res << endl;

	system("pause");
}