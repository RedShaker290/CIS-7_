#include "stacktype.h"

double isValid(double num);
int factorial(int num);
int fibonacci(int num);
void createStack(typestack &stack);
void destroyStack(typestack &stack);
void push(typestack &stack, int &newelement);
void pop(typestack &stack);
void displayStack(typestack &stack);

int newelement = 0;													
typestack stack;													// Made Stack a struct 

int main()
{
	double num = 0;
	int chose = 0;
	int sum = 0;
	
	createStack(stack);                                              // Stack is created 

	cout << "Please enter a number: ";
	cin >> num;
	num = isValid(num);
	cout << "Would you like to do <1>Fractorial or <2> Fibonacci: ";
	cin >> chose;                                                  
	cout << endl;

	if (chose == 1)
	{
		sum = factorial(num);												
		cout << "The factorial of " << num << " is " << sum << endl;
	}
	else
	{
		sum = fibonacci(num);
		cout << "The fibonacci of " << num << " is " << sum << endl;
	}

	destroyStack(stack);
	return 0;
}
double isValid(double num)
{
	while (cin.fail() || num != (int)num)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a valid number: ";
		cin >> num;
	}
	return num;
}
int factorial(int num)												// I gave stack a top to trake how many elements are in it.
{
	push(stack, newelement = num);
	displayStack(stack);

	if (num <= 1)
		return 1;

	int x = num * factorial(num - 1);
	pop(stack);
	displayStack(stack);
	return x;
}
int fibonacci(int num)
{
	if (num <= 2)
		return 1 ;

	return fibonacci(num - 1) + fibonacci(num - 2);
}
void createStack(typestack &stack)
{
	stack.top = -1;
}
void destroyStack(typestack &stack)
{
	stack.top = -1;
}
void push(typestack & stack, int & newelement)
{
	stack.top++;
	stack.name[stack.top] = newelement;
}
void pop(typestack & stack)
{
	stack.top--;                                   
}
void displayStack(typestack & stack)
{
	int traker = stack.top;												// set traker = to top so i can display without destroying the stack 
	while (traker != -1)
	{
		cout << "Stack: Fact " << stack.name[traker] << endl;
		traker--;
	}
	system("PAUSE");
	system("CLS");
}
