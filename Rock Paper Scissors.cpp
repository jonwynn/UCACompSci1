// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

string compChoice()
{
	unsigned int seed = time(0);
	srand(seed);
	int compChoice = (rand() % 3 + 1);
	string compAttack;
	switch (compChoice)
	{
	case 1:
		compAttack = "Rock";
	case 2:
		compAttack = "Paper";
	case 3:
		compAttack = "Scissors";
	}
	return compAttack;
}

string playerChoice(int x)
{
	string userAttack;
	switch (x)
	{
	case 1:
		userAttack = "Rock";
	case 2:
		userAttack = "Paper";
	case 3:
		userAttack = "Scissors";
	}
	return userAttack;
}

int main()
{
	int userWins = 0;
	int compWins = 0;
	int userChoice;
	cout << "This program allows you to play Rock Paper Scissors with the computer!" << endl;
	cout << "Press 1 for Rock, 2 for Paper, and 3 for Scissors, then press enter." << endl;
	cout << "At any time, press -1 to exit the program and display the total scores." << endl;
	cin >> userChoice;

	while (userChoice != -1)
	{
		string compAttack = compChoice();
		string userAttack = playerChoice(userChoice);

		cout << "The computer chose " << compAttack << "!" << endl << endl;

		cout << "You chose " << userAttack << "!" << endl << endl;

		if (compAttack == userAttack)
		{
			cout << "It's a tie!" << endl << endl;
		}
		else if (compAttack == "Rock" && userAttack == "Scissors")
		{
			cout << "You lose!" << endl << endl;
			compWins = compWins++;
		}
		else if (compAttack == "Rock" && userAttack == "Paper")
		{
			cout << "You win!" << endl << endl;
			userWins = userWins++;
		}
		else if (compAttack == "Paper" && userAttack == "Scissors")
		{
			cout << "You win!" << endl << endl;
			userWins = userWins++;
		}
		else if (compAttack == "Paper" && userAttack == "Rock")
		{
			cout << "You lose!" << endl << endl;
			compWins = compWins++;
		}
		else if (compAttack == "Scissors" && userAttack == "Paper")
		{
			cout << "You lose!" << endl << endl;
			compWins = compWins++;
		}
		else if (compAttack == "Scissors" && userAttack == "Rock")
		{
			cout << "You win!" << endl << endl;
			userWins = userWins++;
		}
		cout << "Computer Score:" << compWins << endl;
		cout << "Player Score:" << userWins << endl << endl;

		cout << "To play again, press 1 for Rock, 2 for Paper, and 3 for Scissors, then press enter." << endl;
		cout << "At any time, press -1 to exit the program and display the total scores." << endl;
		cin >> userChoice;
	}
	cout << "Computer Score:" << compWins << endl;
	cout << "Player Score:" << userWins << endl << endl;
}

