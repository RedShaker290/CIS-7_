#include <iostream>
using namespace std;

int inputChecker(float num);

int main()
{
	float num1, num2 = 0;
	int limit, traker = 0;
	int gdc = 1;
	
	cout << "Hello user enter two numbers and I will tell you the GDC " << endl;
	cout << "Enter num1: ";
	num1 = inputChecker(num1);
	cout << "enter num 2: ";
	num2 = inputChecker(num2);

	if (num1 > num2)
		limit = num1;
	else
		limit = num2;

	while (gdc <= limit)
	{
		if ((int)num1 % gdc == 0 && (int)num2 % gdc == 0)
		{
			traker = gdc;
		}
		++gdc;
	}
	cout << "The GDC of " << num1 << " and " << num2 << " is " << traker << endl;
}
int inputChecker(float num)
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