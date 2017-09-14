#include <iostream>
using namespace std;

int inputChecker(float);

int main()
{
	char loop = 'Y';
	float num = 0;
	
	cout << "Hello user this program will tell you if the you enter is even or odd" << endl;
	
	while (loop != 'q')
	{
		cout << "Please enter a number: ";
		num = inputChecker(num);

		if ((int)num % 2 == 0)
			cout << num << " is even" << endl;
		else
			cout << num << " is odd" << endl;
		
		cout << "Enter any key to coutine or <q> to quit" << endl;
		cin >> loop;
		loop = tolower(loop);
	}

	cout << "Goodbye User" << endl;
	return 0;
}

int inputChecker(float num)
{
	cin >> num;

	while (cin.fail() || num != (int) num)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a valid number: ";			
		cin >> num;
	}
	return num;
}