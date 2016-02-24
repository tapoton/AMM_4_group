#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	const int n = 55;     // n = (sqrt(8s+1)-1)/2  - ÙÓÏÛÎ‡, ÓÔ. ÍÓÎ-‚Ó ˜ËÒÂÎ ‚ ÔÓÒÎÂ‰ÌÂÈ ÒÍÓ·ÍÂ, ËÒıÓ‰ˇ ËÁ n-ÍÓÎ-‚‡ ˝ÎÂÏÂÌÚÓ‚
	int mas[n], sum=0, n_curr = 0, res=1;
	srand(time(0));

	for (int i = 0; i < n; i++)   // Á‡ÔÓÎÌÂÌËÂ Ï‡ÒÒË‚‡
	{
		mas[i] = 1 + rand() % 99;
		cout << mas[i] << " ";
	}
	cout << endl;

	n_curr = (sqrt(8*n + 1) - 1) / 2;
	for (int i = 1; i <= n_curr; i++)
	{
        // если объявлять переменную sum здесь, то её не нужно обнулять в конце
		for (int j = i*(i-1)/2+1; j < i*(i-1) / 2 + 1 + i; j++)
		{
			sum += mas[j-1];
		}

		res *= sum;
		sum = 0;
	}

    // достаточно сложный способ вычисления всего этого вышел, с бумажками и прочи
    // предложу первое, что пришло мне в голову: вы можете не объявлять новую переменную для внутреннего цикла,
    // а использовать тот же i для выборки из массива, ведь, в конце концов, вы именно
//    
//    for (int i = 0, n_curr = 1; i < n; i++, n_curr++) {
//        
//        int sum = 0;
//        
//        for (int j = 0; j < n_curr, i < n; j++, i++) {
//            sum += mas[i];
//        }
//        
//        res *= sum;
//    }
    
	cout << res << endl;

	system("pause");
}