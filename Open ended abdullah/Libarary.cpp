#include<iostream>
#include<string>
using namespace std;
int main()
{
	int book = 9;
	int fine = 1;
	string choice;
	int days;

	while (1)
	{
		cout << "Menu" << endl;
		cout << "1.Borrow" << endl;
		cout << "2.Return" << endl;
		cout << "3.Quit(Q)" << endl;
		cout << "Select One= " << endl;
		cin >> choice;

		if (choice == "1")
		{
			if (book > 0)
			{
				book--;
				cout << "Book Borrowed" << endl;
			}
			else
			{
				cout << "No Book Available" << endl;
			}
		}
		else if (choice == "2")
		{
			if (book < 9)
			{
				book++;
				cout << "Enter Number of Days Late= " << endl;
				cin >> days;
				fine = days * fine;
				cout << "Book Returned" << endl;
				cout << "Total Fine= " << fine << "$" << endl;

			}
			else
			{
				cout << "Cannot Return book" << endl;
			}
		}
		else if (choice == "3" || choice == "Q" || choice == "q")
		{
			cout << "Thank You for using Library" << endl;
			break;
		}
		else
		{
			cout << "Invalid!" << endl;
		}
	}
	return 0;
}
