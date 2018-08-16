#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();


int main()
{
	PrintIntro();
    GetGuessAndPrintBack();
	GetGuessAndPrintBack();
	
	return 0;
}

void PrintIntro()
{
	//intorduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to BullCow Game,fun game\n";
	cout << "Can you guess the  " << WORD_LENGTH << " lettter isogram I'm thinking of?\n\n";
	return;
}

string GetGuessAndPrintBack()
{
	//get guess from the user
	string Guess = "";
	cout << "Input your guess: ";
	getline(cin, Guess);
	cout << "Your Guess is " << Guess << "\n";
	return Guess;
}