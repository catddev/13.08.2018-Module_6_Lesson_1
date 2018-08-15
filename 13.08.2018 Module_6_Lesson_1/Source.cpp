#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include<ctime>

using namespace std;

int kub(int a) {
	return a*a*a;}

int plus1(int a, int b, int c) {
	return a + b + c;}

int product(int a, int b) {
	return a*b;
}
int maximum(int a, int b) {
	int max;
	max = a > b ? a : b;
	return max;
}
int maximum3(int a, int b, int c) {
	int max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}
int sum_array(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += a[i];
		
	return sum;
}
int prod_array(int a[], int size) {
	int prod = 1;
	for (int i = 0; i < size; i++)
		prod *= a[i];

	return prod;
}
void fill_arr(int a[], int size) {
	srand(time(null));
	for (int i = 0; i < size; i++)
		a[i] = rand() % 10 + 1;
}
void print_arr(int a[], int size) {
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}
bool check(int x) {
	if (x % 2 == 0) return true;
	else return false;
}
bool prime(int x) {
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
			return false; // return обеспечивает полный выход из цикла, из функции и тд, т.е. не нужно брейк, доп условий и тд, после первого же ретерна выход происходит
	}
	return true;
}
bool perfect(int a) {
	int sum = 0;
	for (int i = 1; i < a; i++)
	{
		if (a%i == 0)
			sum += i;
	}

	if (sum == a) return true;
	else return false;
}
void search_perf(int a, int b) {
	for (int i = a; i <= b; i++)
	{
		if (perfect(i))
			cout << i << endl;
	}
}
bool LN(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A'&&c <= 'Z') || (c >= '0'&&c <= '9'))
		return true;
	else return false;
}
//bool lucky(int a) {
//	int n = 0;
//	if (a >=100000 && a<1000000)
//	{
//		int sum = 0;
//		int sum1 = 0;
//
//		for(int i=0; i<6; i++)
//		{
//			n = a % 10;
//			a = a / 10;
//			if (i < 3)
//				sum += n;
//			else sum1 += n;
//		}
//		if (sum == sum1) return true;
//		else return false;
//	}
//}
bool lucky(int n) {
	int a[6];
	int i = 0;
	if (n >= 100000 && n<1000000)
	{
		while (n)
		{
			a[i++] = n % 10;
			n /= 10;
		}
		if ((a[0] + a[1] + a[2]) == (a[3] + a[4] + a[5])) return true;
		else return false;
	}
	else return false;
}
int max_el(int a[], int size) {
	int max = INT_MIN;
	for (int i = 0; i < size; i++)
		max = a[i] > max ? a[i] : max;

	return max;
}
int zeros(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] == 0)
			count++;
	return count;
}
int zeros(double a[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] == 0)
			count++;
	return count;
}
int check_el(int a[], int size, int x)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > x)
			count++;
	return count;
}
int check_el(double a[], int size, int x)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > x)
			count++;
	return count;
}
//16. **Дан одномерный массив целых чисел.Напишите не рекурсивную функцию,
//которая осуществляет нахождения искомого значения с помощью бинарного
//поиска.Функция возвращает позицию вхождения искомого значения.
//Проиллюстрируйте работу функции примером.

// check case 2

int binary_search(int a[], int size, int key)
{
	int low;
	int high;
	int middle;

	int i = 0;
	for (int pass = 1; pass < size; pass++) // здесь просто отсортируем
	{
		i = pass;
		while ((a[i] < a[i - 1]) && i > 0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}
	for (i = 0; i < size; i++)
		cout << a[i] << " ";

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		if (key > a[middle])
			low = middle + 1;
		else if (key < a[middle])
			high = middle - 1;
		else break; // искомое число найдено
	}

	return middle;
}
//17. **Напишите функцию, которая принимает три массива целых чисел.Выполнить
//поэлементное сложение элементов первых двух массивов, и результат занести в
//третий массив.
// case 3

void fill_sum_arr(int a[], int b[], int c[], int size1, int size2, int size3) {
	int min = INT_MAX;
	min = size1 < size2 ? size1 : size2;
	min = size3 < min ? size3 : min;
	for (int i = 0; i < min; i++)
		c[i] = a[i] + b[i];
}

// 18.	**Напишите функцию, которая принимает вещественное число и количество знаков и возвращает округленное число до указанного знака.
// case 1

double round_num(double x, int n) {

	int a[100];
	int i = 0;
	while (true)
	{
		x = x / 10;
		i++;

	}

	return x;
}


int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn;

		switch (tn)
		{
		case 1:
		{

			/*int a[] = { 2, 4, 0, 7, 4, 2 };
			double b[] = { 1.5, 0, 2.4, 1.3, 0, 1 };

			int x = 3.7;
			cout << check_el(a, 6, x) << endl;*/

			/*cout << max_el(a, 6) << endl;*/

			/*cout << zeros(b, 6) << endl;
			cout << zeros(a, 6) << endl;*/


			/*int a, b, c, d;*/
			//cin >> a >> b >> c >> d;

			/*cout << endl;*/
			/*cout << kub(a) << endl;
			cout << b*b*b << endl;*/

			/*cout << plus1(a, b, c) << endl;
			cout << plus1(a, c, d) << endl;*/

			/*cout << product(a, b) << endl;*/

			/*cout << maximum(a, d) << endl;*/

			/*cout << maximum3(a, b, c) << endl;*/

			/*int a[] = { 3, 4, 2, 7, 9 };*/
			/*int a[10];
			int b[3] = { 25, 21, 56 };*/

			/*cout << sum_array(a, 5) << endl;
			cout << sum_array(b, 3) << endl;*/
			
			/*fill_arr(a, 10);
			print_arr(a, 10);
			print_arr(b, 3);*/

			/*int x = 15;
			cout << check(x) << endl;*/
		
		/*	int x = 17;
			int y = 8;
			int z = 2;

			cout << prime(x) << endl;
			cout << prime(y) << endl;
			cout << prime(z) << endl;*/

			/*int x;
			cin >> x;
			cout << perfect(x) << endl;*/

			/*int a, b;
			cin >> a >> b;
			search_perf(a, b);*/

		/*	char ch;
			cin >> ch;

			cout << LN(ch) << endl;*/

			/*int x;
			cin >> x;
			cout << lucky(x) << endl;*/
		}
		break;
		case 2:
		{
			int a[] = { 4, 0, 7, 17, 11, 1, 18, 20 };
			int key;
			cin >> key;

			cout << binary_search(a, 8, key) << endl << endl;

		}
		break;
		case 3:
		{
			int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			int b[5] = { 0, 2, 4, 6, 8 };
			int c[20];

			fill_sum_arr(a, b, c, 9, 5, 20);
			for (int i = 0; i < 5; i++)
				cout << c[i] << " ";
			cout << endl;
		}
		case 4:
		{
			double x = 123.456;
			int n = 4;

			cout << round_num(x, n) << endl << endl;
		}
		break;
		case 5:
		{

		}
		break;
		case 6:
		{

		}
		break;
		case 7:
		{

		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}