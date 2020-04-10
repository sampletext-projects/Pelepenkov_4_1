﻿// primer4_3.cpp: главный файл проекта.

#include <iostream>
#include <locale.h>
using namespace std;

/*Пример 4.3. Пусть требуется вычислить сумму ряда
по формуле S= x+x/2+x/3+x/4+...x/n+...
Очевидно, что значение суммы будет зависеть от зна-
чения x. Добавить сложность к этому алгоритму может
одно из следующих условий.
1. Вычислить суммы для различного числа слагаемых
(n1, n2, n3 и т. д.) в арифметическом цикле или цикле,
управляемом событием.
2. Вычислить суммы для различных значений x, на-
пример, для x ∈ [x0, xn] с шагом Δx, или вводимых с кла-
виатуры.
3. Вычислить суммы для различных степеней точно-
сти, например, для ε ∈ [ε0, εn] в итерационном цикле.
*/
void main(void)
{
	setlocale(LC_ALL, "Russian");
	double x; // аргумент функции и параметр внешнего цикла (2)
	int n; // параметр внутреннего цикла (2)
	double S;
	int k; // параметр числа элементов суммы (1)

	const int K = 10; // максимальное количество суммы

	cout.setf(ios::fixed); //Установить фиксированный формат для вещественных чисел
	cout.precision(4); //Установить для вывода кол-во дробных разрядов
	cout << "Вычисление суммы чисел натурального ряда (1 вариант).\n";

	cout << "Выполнил Пелепенков Иван Алексеевич (УМЛ-112)" << endl;

	//1-й вариант
	cout << "Введите аргумент х\n";
	cin >> x;
	k = 1;
	// управление внешним циклом
	while (k <= K)
	{
		// управление внутренним циклом
		S = 0;
		for (n = 1; n <= k; n++)
			S = S + x / n;
		cout << "Для k=" << k << " сумма = " << S << "\n";
		k = k + 1;
	}

	system("PAUSE");
} // End of main
