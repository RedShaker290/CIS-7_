#include "Set.h"

Set::Set()
{
	top = -1;
}
Set::~Set(){}
void Set::push(string newelement)
{
	top++;
	content[top] = newelement;
}
void Set::interset(Set x)
{
	for (int i = top; i > -1; i--)
	{
		for (int j = x.top; j > -1; j--)
		{
			if (content[i] == x.content[j])
				cout << content[i] << ", ";
		}
	}
}
void Set::comboAnddiff(Set x)
{
	for (int i = top; i > -1; i--)
	{
		int key = 0;

		for (int j = x.top; j > -1; j--)
		{
			if (content[i] == x.content[j])
				key = 1;
			else if (content[i] != x.content[j])
			{
				if (j == 0 && key != 1)
					cout << content[i] << ", ";
			}
		}
	}
}
void Set::powerSet()
{
	top++;
	unsigned int limit = pow(2, top);
	
	for (int counter = 0; counter < limit; counter++)
	{
		for (int i = 0; i < top; i++)
		{
			if (counter & (1 << i))
				cout << content[i] << " , ";
		}
		cout << endl;
	}
}
void Set::display()
{
	int traker = top;
	while (traker != -1)
	{
		cout << content[traker] << ", ";
		traker--;
	}
}
