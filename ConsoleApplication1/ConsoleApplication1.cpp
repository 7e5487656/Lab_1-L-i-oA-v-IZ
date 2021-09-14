//№1
#include <stdlib.h>
#include <iostream>
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int a[n];
	int  i;
	for (i = 0; i < 10; i++) {
		a[i] = rand() % 30;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	int min = a[0], max = a[0];
	for (i = 1; i < 10; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	for (i = 1; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("\n%d", max - min);
	_getch();
}
//№2
/*#include <iostream>
#include <stdlib.h>
#include <ctime>
int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	srand(time(NULL));
	int arr[5] = { 0 };
	printf("Массив заполненный случайными числами:\n");
	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 100;
		printf("%d\n", arr[i]);
	}
	system("pause>nul");
	return 0;
}*/

//№3
/*#include <iostream>
int main()
{
	setlocale(LC_ALL, "rus");
	int* a;
	int n;
	srand(time(NULL));
	a = (int*)malloc(n * sizeof(int));
	printf("Введите n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 30;
		printf("%d\t", a[i]);
	}
	free(a);
}*/

//№4
/*#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
int main()
{
setlocale(LC_ALL, "rus");
int sumCol[5],sumRow[5], arr[5][5], i, j;

for (i = 0; i < 5; i++){
sumCol[i] = 0;
sumRow[i] = 0;
}
for (i = 0; i < 5; i++){
for (j = 0; j < 5; j++){
arr[i][j] = rand() % 100;
printf("%d\t", arr[i][j]);
sumCol[j] += arr[i][j];
sumRow[i] += arr[i][j];
}
printf("\n");
}
printf("\n");
printf("Вывод суммы значений в каждом столбце двумерного массива:\n");
for (i = 0; i < 5; i++){
printf("%d\t", sumCol[i]);
}
printf("\n");
printf("Вывод суммы значений в каждой строке двумерного массива:\n");
for (i = 0; i < 5; i++){
printf("%d\t", sumRow[i]);
}
return 0;
}*/

//№5
/*#include <stdlib.h>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	clock_t start, end; // объявляем переменные для определения времени выполнения
	int i = 0, j = 0, r, n = 0;
	cout << "Введите n:" << endl;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i) {
		a[i] = new int[n];
	}
	int** b = new int* [n];
	for (int i = 0; i < n; ++i) {
		b[i] = new int[n];
	}
	int** c = new int* [n];
	for (int i = 0; i < n; ++i) {
		c[i] = new int[n];
	}
	int elem_c;
	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	while (i < n)
	{
		while (j < n)
		{
			a[i][j] = rand() % 100; // заполняем массив случайными числами
			j++;
		}
		i++;
	}
	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	i = 0; j = 0;
	while (i < n)
	{
		while (j < n)
		{
			b[i][j] = rand() % 100; // заполняем массив случайными числами
			j++;
		}
		i++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			elem_c = 0;
			for (r = 0; r < n; r++)
			{
				elem_c = elem_c + a[i][r] * b[r][j];
				c[i][j] = elem_c;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
	for (int i = 0; i < n; ++i) {
		delete[] b[i];
	}
	delete[] b;
	for (int i = 0; i < n; ++i) {
		delete[] c[i];
	}
	delete[] c;
	cout << "runtime = " << clock() / 1000.0 << endl; // время работы программы
	return 0;
}*/

