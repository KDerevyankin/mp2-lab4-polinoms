#include "polinoms.h"

int main()
{
	Polinom A, B, ADD, SUB, MUL, MUL_NUMBER;
	double NUMBER;
	int choice;
	cout << endl << "Entering the polynomial:  ";
	A.Input(); 
	cout << "Your polynomial: "; 
	A.Print();  
	cout << endl << endl;
	cout << "Enter operation:\n 1 - Addition\n 2 - Subrection\n 3 - Multiplication\n 4 - Multiplication by a number" << endl;
	cin >> choice;
	cout << endl;
	if (choice == 4)
	{
		cout << "Enter the number:" << endl;
		cin >> NUMBER;
		cout << endl;
		MUL_NUMBER = A * NUMBER;
		cout << "Multiplication by a number:  "; 
		MUL_NUMBER.Print();
		cout << endl;
	}
	else
	{
		cout << "Entering the polynomial:  ";
		B.Input();
		cout << "Your polynomial: ";
		B.Print();
		cout << endl << endl;
		switch (choice)
		{
		case 1:
			ADD = A + B;
			cout << "Addition:  "; ADD.Print();  cout << endl;
			break;
		case 2:
			SUB = A - B;
			cout << "Subtraction:  "; SUB.Print();  cout << endl;
			break;
		case 3:
			MUL = A * B;
			cout << "Multiplication:  ";
			if (MUL.Highest_Degree() < 999)
			{
				MUL.Print();  cout << endl << endl;
			}
			else
			{
				cout << "The degree of a polynomial is outside the scope of this implementation." << endl;
			}
			break;
		default:
			cout << "Invalid value entered" << endl;
			break;
		}
	}
}