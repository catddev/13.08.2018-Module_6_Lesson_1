#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include<math.h>
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
	srand(time(NULL));
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

			int a[] = { 2, 4, 0, 7, 4, 2 };
			double b[] = { 1.5, 0, 2.4, 1.3, 0, 1 };

			int x = 3.7;
			cout << check_el(a, 6, x) << endl;

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

		}
		break;
		case 3:
		{

		}
		break;
		case 4:
		{

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