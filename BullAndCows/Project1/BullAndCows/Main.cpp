#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();

//the entry point for our app
int main()
{
	
	PrintIntro();
	PlayGame();
	
	return 0;//exit the app
}


//intorduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to BullCow Game,fun game\n";
	cout << "Can you guess the  " << WORD_LENGTH << " lettter isogram I'm thinking of?\n\n";
	return;
}


void PlayGame()
{
	string Guess = "";
	constexpr int NUMBERS_OF_TURNS = 5;
	//loop for the numbers of turns asking guess
	for (size_t count = 0; count < NUMBERS_OF_TURNS; count++)
	{
		Guess = GetGuess();
		cout << "Your Guess is " << Guess << "\n";
	}
}


//get guess from the user
string GetGuess()
{
	string Guess = "";
	cout << "Input your guess: ";
	getline(cin, Guess);
	
	return Guess;
}