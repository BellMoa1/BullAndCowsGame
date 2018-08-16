#include <iostream>
#include <string>
using namespace std;

int main()
{
	//intorduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to BullCow Game,fun game\n";
	cout << "Can you guess the  " << WORD_LENGTH << " lettter isogram I'm thinking of?\n\n";
	
	
	//get guess from the user
	string Guess = "";
	cout << "Input your guess: ";
	getline(cin, Guess);
	//repeat the guess to him
	cout << "Your guess is " << Guess << "\n";
	
	//get guess from the user
	cout << "Input your guess: ";
	getline(cin, Guess);
	//repeat the guess to him
	cout << "Your guess is " << Guess << "\n";
	return 0;
}