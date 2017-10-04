#include <iostream>
#include <ctime>
#include <cstdio>
using namespace std;

int inputChecker(double num);
int numBigger(double num1, double num2, int limit);
int gdcBrute(double num1, double num2);
int gdcE(int num1, int num2);

int main()
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	int gdc = 0;

	cout << "Hello user enter two numbers and I will tell you the GDC " << endl;
	cout << "Enter num1: ";
	num1 = inputChecker(num1);
	cout << "enter num 2: ";
	num2 = inputChecker(num2);

	gdcBrute(num1,num2);

	if (num1 > num2)
		num3 = num1;
	else
	{
		num3 = num2;
		num2 = num1;
	}

	gdc = gdcE(num3, num2);
	cout << "Euclid: The GDC of " << num1 << " and " << num2 << " is " << gdc << endl;

	return 0;
}
int inputChecker(double num)
{
	cin >> num;

	while (cin.fail() || num != (int)num)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a valid number: ";
		cin >> num;
	}
	return num;
}
int numBigger(double num1, double num2, int limit)
{
	if (num1 > num2)
	{
		limit = num1;
		return limit;
	}
	else
	{
		limit = num2;
		return limit;
	}
}
int gdcBrute(double num1, double num2)
{
	int start_s = clock();

	int limit = 0;
	int traker = 0;
	limit = numBigger(num1, num2, limit);

	for (int gdc = 1; gdc <= limit;)
	{
		if ((int)num1 % gdc == 0 && (int)num2 % gdc == 0)
		{
			traker = gdc;
		}
		++gdc;
	}
	cout << "Brute: The GDC of " << num1 << " and " << num2 << " is " << traker << endl;
	
	int stop_s = clock();
	cout << "Brute time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;
	return 0;
}
int gdcE(int num1, int num2)
{
	int start_s = clock();

	if (num2 == 0)
	{
		int stop_s = clock();
		cout << "Euclid time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;
		return num1;
	}
	gdcE(num2, num1 % num2);
}
