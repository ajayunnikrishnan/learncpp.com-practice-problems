#include <iostream>
#include "Random.h" // https://www.learncpp.com/cpp-tutorial/global-random-numbers-random-h/
#include <limits>

void clearCinBuffer()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// returns false if input is of correct type, returns true if input is not correct type
bool unexpectedInput()
{
  if (!std::cin)
  {
    std::cin.clear();
    clearCinBuffer();
    return 1;
  }
  return 0;
}

int getGuess()
{
  while (true)
  {
    int guess{};
    std::cin >> guess;

    // if extraction failed
    if (unexpectedInput() || guess > 100 || guess < 1)
    {
      std::cout << "Enter an integer within the values 1-100:\n";
      continue;
    }

    // if extraneous characters
    clearCinBuffer();
    return guess;
  }
}

// returns true if the user won, false if they lost
bool playHiLo(int guesses, int min, int max)
{
	std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n";
	int number{ Random::get(min, max) }; // this is the number the user needs to guess
  
  std::cout << "number: " << number << '\n';

	// Loop through all of the guesses
	for (int count{ 1 }; count <= guesses; ++count)
	{
		std::cout << "Guess #" << count << ": ";

		int guess{ getGuess() };
		std::cin >> guess;

		if (guess > number)
			std::cout << "Your guess is too high.\n";
		else if (guess < number)
			std::cout << "Your guess is too low.\n";
		else // guess == number, so the user won
		{
			std::cout << "Correct! You win!\n";
			return true;
		}
	}

	// The user lost
	std::cout << "Sorry, you lose. The correct number was " << number << '\n';
	return false;
}

bool playAgain()
{
	// Keep asking the user if they want to play again until they pick y or n.
	while (true)
	{
		char ch{};
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> ch;

		switch (ch)
		{
		case 'y': return true;
		case 'n': return false;
		}
	}
}

int main()
{
	constexpr int guesses { 7 }; // the user has this many guesses
	constexpr int min     { 1 };
	constexpr int max     { 100 };

	do
	{
		playHiLo(guesses, min, max);
	} while (playAgain());

	std::cout << "Thank you for playing.\n";

	return 0;
}
