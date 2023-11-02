#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout << "If you want to find Prime Numbers In a Given Range then Enter(1)?" << endl;
	cout << "If you want to check if a Specific Number is Prime then Enter(2)?" << endl;
	cin >> choice;
	if (choice == 1)
	{
		int limit, n, count = 0;
		cout << "Enter the Range Limit= ";
		cin >> limit;
		for (int i = 1; i <= limit; i++)
		{
			for (int j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					count++;
				}
			}
			if (count == 1)
			{
				cout << i << " ";
				count = 0;
			}
			count = 0;
		}
	}
	else if (choice == 2)
	{
		int num, count = 0;
		cout << "Enter the Number= ";
		cin >> num;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
				count++;
		}
		if (count == 1)
			cout << "The Number Is Prime";
		else
			cout << "It is not a Prime Number";
	}
	else
		cout << "Invalid Number!";

	return 0;
}
