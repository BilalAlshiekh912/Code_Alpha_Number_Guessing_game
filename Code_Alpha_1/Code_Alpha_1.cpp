#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int number;
	int guess;
	cout << "Please guess a number between 1 and 10" << endl;
	cin >> guess;
	if (guess < 1 || guess > 10)
	{
		cout << "Invalid option please choose again" << endl;
		cin >> guess;
	}
	number = (rand() % 10)+1; //the number after the remainder determines the range of guessing numbers
	

	do
	{
		if (number < guess)
		{
			cout << "Too big guess again" << endl;
			cin >> guess;
			if (guess < 1 || guess > 10)
			{
				cout << "Invalid option please choose again" << endl;
				cin >> guess;
			}
		}
		if (number > guess)
		{
			cout << "Too small guess again" << endl;
			cin >> guess;
			if (guess < 1 || guess > 10)
			{
				cout << "Invalid option please choose again" << endl;
				cin >> guess;
			}
		}
	}while (number != guess);

	cout << "Correct you won" << endl;




	return 0;
}