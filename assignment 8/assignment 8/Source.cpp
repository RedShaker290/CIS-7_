#include <iostream>
using namespace std;

int main()
{
	int limit = 0;
	int start = 0;
	int guess = 0;
	int primeTraker = 0;
	
	cout << "Hello user enter a number and then guess how many prime numbers there is" << endl;
	cin >> limit;

	cout << "Now guess how many prime numbers there is bettwen 0 and " << limit << endl;
	cin >> guess;
	
	while (start < limit)
	{
		int key = 0;
		for (int i = 2; i <= start / 2; ++i)
		{
			if (start % i == 0)
			{
				key = 1;
				break;
			}
		}

		if (key == 0 && start != 1 && start != 0)
		{
			cout << start << " ";
			primeTraker++;
		}

		++start;
	}

	cout << "all these numbers are primes" << endl;
	if (guess == primeTraker)
	{
		cout << "congrates you guessed right nerd!!!" << endl;
	}
	else
	{
		cout << "you got it wrong broski!!! its " << primeTraker << endl;
	}
}