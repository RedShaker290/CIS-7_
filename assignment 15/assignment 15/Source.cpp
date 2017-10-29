#include "Set.h"

void enterVal(Set & x, char loop);

int main()
{
	Set a;
	Set b;
	char loop = 'Y';

	cout << "Hello user please enter values for set A and set B" << endl;
	
	cout << "Enter for set A: ";
	enterVal(a, loop);
	system("CLS");

	/*cout << "Enter for set B: ";
	enterVal(b, loop);
	system("CLS");*/

	cout << endl <<"Set A: ";
	a.display();
	cout << endl << "Set B: ";
	b.display();
	cout << endl << endl;

	while (loop == 'Y')
	{
		int chose = 0;

		cout << "<1> A interset B " << endl;
		cout << "<2> A Union B " << endl;
		cout << "<3> A differnce B " << endl;
		cout << "<4> B differnce A " << endl;
		cout << "<5> A's powerset " << endl;
		cout << "<6> B's powerset " << endl;
		cout << "Please select an opertaion : ";
		cin >> chose;

		if (chose == 1)
		{
			cout << "Set A and B share: ";
			a.interset(b);
		}
			
		else if (chose == 2)
		{
			cout << "Set A and B union: ";
			a.interset(b);
			a.comboAnddiff(b);
			b.comboAnddiff(a);
		}
		else if (chose == 3)
		{
			cout << "A - B =: ";
			a.comboAnddiff(b);
		}
		else if (chose == 4)
		{
			cout << "B - A =: ";
			b.comboAnddiff(a);
		}
		else if (chose == 5)
		{
			cout << "Powerset of A: ";
			a.powerSet();
		}
		else if (chose == 6)
		{
			cout << "Powerset of B: ";
			b.powerSet();
		}

		cout << endl << "Would you like to do another <Y>es or enter any key: ";
		cin >> loop;
		loop = toupper(loop);
	}
}
void enterVal(Set & x, char loop)
{
	string newelement;
	loop = 'Y';

	while (loop == 'Y')
	{
		cin >> newelement;
		x.push(newelement);

		cout << "Would you like to enter another element" << endl;
		cout << "<Y>es or any other key: ";
		cin >> loop;
		loop = toupper(loop);
	}
}

