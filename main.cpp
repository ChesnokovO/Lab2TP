#include <iostream>
#include <conio.h>
using namespace std;

#include "myLong.h"
//#include "stack.h"
#include "myException.h"
#include "Stack.h"

void menu();

int main(void)
{
	cout << "Answer 1" << endl;
	myLong a;
	cout << "a++\t" << a++ << endl;
	cout << "++a\t" << ++a << endl;
	cout << "a--\t" << a-- << endl;
	cout << "--a\t" << --a << endl;
	cout << "!a\t" << !a << endl;

	size_t b = 4;
	stack st(b);
	stack st2(b);
	double num;
	char c;
	

	menu();


	for (;;)
	{
		try
		{
			switch (c = _getch())
			{
			case '0':
				menu();
				break;

			case '1':
				cout << "Enter a number\n";
				cin >> num;
				st2 = st;
				st2 += num;
				cout << st2;
				break;

			case '2':
				cout << "Enter a number\n";
				cin >> num;
				st += num;
				cout << st;
				break;

			case '3':
				cout << "Enter a number\n";
				cin >> num;
				st2 = st;
				st2 -= num;
				cout << st2;
				break;

			case '4':
				cout << "Enter a number\n";
				cin >> num;
				st -= num;
				cout << st;
				break;

			case '5':
				cout << "Enter a number\n";
				cin >> num;
				st2 = st;
				st2 *= num;
				cout << st2;
				break;

			case '6':
				cout << "Enter a number\n";
				cin >> num;
				st *= num;
				cout << st;
				break;

			case '7':
				cout << "Enter a number\n";
				cin >> num;
				st2 = st;
				st2 /= num;
				cout << st2;
				break;

			case '8':
				cout << "Enter a number\n";
				cin >> num;
				st /= num;
				cout << st;
				break;

			case 'a':
				cout << "Enter a number\n";
				cin >> num;
				st.push(new elem(num));
				break;

			case 's':
				cout << st.pop();
				break;

			case 'd':
				if (st.getSize() == 0)
					cout << "Stack is empty\n";
				else
					cout << st;
				break;

			default:
				cout << "Command " << c << " undefined" << endl << "help - 0" << endl;
				break;
			}
		}
		catch (myException e)
		{
			cout << e << endl;
		}
	}
}

void menu()
{
	cout << "0 - Show menu" << endl;
	cout << "1 - Stack + number" << endl;
	cout << "2 - Stack += number" << endl;
	cout << "3 - Stack - number" << endl;
	cout << "4 - Stack -= number" << endl;
	cout << "5 - Stack * number" << endl;;
	cout << "6 - Stack *= number" << endl;
	cout << "7 - Stack / number" << endl;
	cout << "8 - Stack /= number" << endl;
	cout << "a - Push element" << endl;
	cout << "s - Pop element" << endl;
	cout << "d - Show Stack" << endl;
}