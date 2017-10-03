#include <iostream>
using namespace std;

double isPrime(double num, char loop);
double isValid(double num, char loop);
void bruteForce(double num, char loop);
int prime2(double num, int key);

int main()
{
	double num, num1 = 0;
	char loop = 'Y';
	int key = 0;

	cout << "Hello user enter a composite number and I will " <<
		"break it down into the primes that make" <<
		" it up" << endl;

	cin >> num;

	num = isValid(num, loop);
	num1 = num;
	bruteForce(num, loop);
	
	cout << num1 << endl;
	return 0;
}
double isValid(double num, char loop)
{
	while (cin.fail() || num != (int)num)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a valid number: ";
		cin >> num;
	}
	num = isPrime(num, loop);
	return num;
}
double isPrime(double num, char loop)
{
	while (loop == 'Y')
	{
		int key = 0;
		key = prime2(num,key);
		
		if (key == 0)
		{
			cout << num << " is prime number pick a composite number" << endl;
			cin >> num;

			if (cin.fail() || num != (int)num)
				num = isValid(num, loop);
		}
		else
			loop = 'n';
	}
		return num;
}
void bruteForce(double num, char loop)
{
	double limit = num;
	int i = 2;

	while ( i < limit)
	{
		int key = 0;
		int j = i;
		key = prime2( j, key);             // checks if i is prime 

		if (key == 0)
		{
			if (num / i == (int)num / i)
			{
				num = num / i;
				cout << " " << i << " * ";

				 key = prime2(num, key);
				 if (key == 0)
					 break;
			}
			else
				i++;
		}
		else
			i++;                         // if not adds until i is prime 
	}
	
	if (num != 1)
		cout << num << " = ";
	else
		cout << " = ";
	
}
int prime2(double num, int key)
{
	for (int i = 2; i <= num / 2; ++i)
	{
		if ((int)num % i == 0)
		{
			key = 1;
			break;
		}
	}
	if (key == 0)
	{
		return key;
	}
	else
		return key;
}
