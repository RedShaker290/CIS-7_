#include "stacktype.h"

void towers(int num, stacktype &, stacktype &, stacktype &);
void createStack(stacktype &);
void push(stacktype &, int & newelement);
int pop(stacktype &, int poppedelement);
void displayStack(stacktype &stack);
void manger(int num, stacktype &frompeg, stacktype &topeg, stacktype &auxpeg);

int poppedelement = 0;
int newelement = 0;

int main()
{
	stacktype frompeg;
	stacktype topeg;
	stacktype auxpeg;
	createStack(frompeg);
	createStack(topeg);
	createStack(auxpeg);
	frompeg.name = 'A';
	topeg.name = 'C';
	auxpeg.name = 'B';

	int num;
	cout << "Enter the number of disks : ";
	cin >> num;

	for (int i = num; i >= 1; i--)
	{
		push(frompeg, newelement = i);
		displayStack(frompeg);
		displayStack(topeg);
		displayStack(auxpeg);
	}
	towers(num, frompeg, topeg, auxpeg);
	return 0;
}
void towers(int num, stacktype &frompeg, stacktype &topeg, stacktype &auxpeg)
{
	if (num == 1)
	{
		manger(num, frompeg, topeg, auxpeg);
		cout << "Move disk 1 from peg " << frompeg.name << " to peg " << topeg.name << endl;
		return;
	}
	
	towers(num - 1, frompeg, auxpeg, topeg);

	manger(num,frompeg,topeg,auxpeg);

	cout << "Move disk " << num << " from peg " << frompeg.name << " to peg " << topeg.name << endl;
	towers(num - 1, auxpeg, topeg, frompeg);
}
void createStack(stacktype &stack)
{
	stack.top = -1;
}
void push(stacktype &stack, int & newelement)
{
	stack.top++;
	stack.num[stack.top] = newelement;
}
int pop(stacktype &stack, int poppedelement)
{
	poppedelement = stack.num[stack.top];
	stack.top--;
	return poppedelement;
}
void displayStack(stacktype & stack)
{
	int traker = stack.top;		
	cout << stack.name;
	while (traker != -1)
	{
		cout << " " << stack.num[traker] << ",";
		traker--;
	}
	system("PAUSE");
}
void manger(int num, stacktype &frompeg, stacktype &topeg, stacktype &auxpeg)
{
	poppedelement = pop(frompeg, poppedelement);
	push(topeg, poppedelement);
	displayStack(frompeg);
	displayStack(topeg);
	displayStack(auxpeg);
}
