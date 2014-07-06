#include <iostream> // includes and statements section

using std::cin; // user input
using std::cout; // machine output
using std::endl; // for line breaks 

int main () {

	int magicNumber; // number player 1 enters 
	int guess; // number that player 2 guesses
	bool correct = false; // for when the user has correctly guessed the number
	int tries = 3; // you get 3 tries

	cout << "Let's play a number guessing game!" << endl;
	cout << "Ready Player 1:" << endl;
	cout << "Player 1:  please pick a number for Player 2 to guess." << endl;
	cout << "This number needs to be between 0 and 50." << endl;
	cout << "Pick your secret number now: " << endl;
	cin >> magicNumber;

	int number = 50;
	while (number >= 0)
	{
		cout << endl;
		number--;
	}

	cout << "Ready Player 2!" << endl;
	cout << "You're going to now try to guess Player 1's secret number." << endl;
	cout << "This number will be between 0 and 50" << endl;
	cout << "You have 3 tries!" << endl;

	do {
		cout << "What is your guess?" << endl;
		cin >> guess;

		if (guess < magicNumber)
		{  	
			cout << "You guessed too low!" << endl;
		}   
		else if (guess > magicNumber)
		{
			cout << "You guessed too high!" << endl;
		}
		else if (guess == magicNumber)
		{
			cout << "Your guess is correct!  Huzzah!" << endl;
		}
	}  while ((guess != magicNumber) && (tries >= 3));


	/* for(int x = 0; x < 3 && (guess != magicNumber); x++, tries--)
	 *    {
	 *          tries++;
	 *              } */


	if(tries == 0)
		cout << "Sorry, you lose.  :(" << endl;
	cout << "The correct number was " << magicNumber << endl;


	return 0;
}
