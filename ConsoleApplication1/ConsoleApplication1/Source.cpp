#include <iostream>
using namespace std;

float isPrime(float num);
float isValid(float num);
float by2(float num, char loop);

int main()
{
	float num = 0;
	char loop = 'Y';

	cout << "Hello user enter a composite number and I will " <<
		"break it down into the primes that make" <<
		"it up" << endl;

	cin >> num;
	num = isValid(num);
	
	while (loop == 'Y')
	{
		if (num / 2 == (int)num / 2)
			by2(num, loop);
	
		cin >> loop;
		loop = toupper(loop);
	}
	return 0;
}
float isValid(float num)
{
	while (cin.fail() || num != (int)num)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a valid number: ";
		cin >> num;
	}
	num = isPrime(num);
	return num;
}
float isPrime(float num)
{
	char loop = 'Y';

	while (loop == 'Y')
	{
		int key = 0;
		
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
			cout << num << " is prime number pick a composite number" << endl;
			cin >> num;

			if (cin.fail() || num != (int)num)
				num = isValid(num);
		}
		else
			loop = 'n';
	}
		return num;
}
float by2(float num, char loop)
{
	int num1 = num;
		num = num / 2;
		cout << 2;
		while (loop == 'Y')
		{
			if (num / 2 == (int)num / 2)
			{
				num = num / 2;
				cout << " 2 " << endl;
			}
			else if (num / 3 == (int)num / 3)
			{
				num = num / 3;
				cout << " 3 " << endl;
			}
			else if (num / 5 == (int)num / 5)
			{
				num = num / 5;
				cout << " 5 " << endl;
			}
			else if (num / 7 == (int)num / 7)
			{
				num = num / 7;
				cout << " 7 " << endl;
			}
			if (num / 11 == (int)num / 11)
			{
				num = num / 11;
				cout << " 11 " << endl;
			}
			else if (num / 13 == (int)num / 13)
			{
				num = num / 13;
				cout << " 13 " << endl;
			}
			else
				num = isPrime(num);
		}
		cout << " make " << num1 << endl;
	return 0;
}