#include <random>
#include <cstdlib>
#include <iostream>

int main()
{
  std::mt19937 mt{std::random_device{}()};
  std::uniform_int_distribution num(1,100);
  int actual_num {num(mt)};


  int round_num {1};
  int max_rounds {7};

  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have " << max_rounds <<" tries to guess what it is." << '\n';

  while (true)
  {
    restart_game:
    // quit program after max rounds
    if (round_num > max_rounds)
    {
      std::cout << "Sorry, you lose. The correct number was " << actual_num << ".\n";
      play_again:
      break;
    }

    // get guess
    std::cout << "Guess #" << round_num << ": ";
    int guess_num;
    std::cin >> guess_num;

    // check guess accuracy
    if (guess_num > actual_num)
    {
      std::cout << "Your guess is too high." << '\n';
    }
    else if (guess_num < actual_num)
    {
      std::cout << "Your guess is too low." << '\n';
    }
    else
  {
      std::cout << "Correct! You win!" << '\n';
      std::cout << "Would you like to play again (y/n)?";
      char play_again;
      std::cin >> play_again;

      goto play_again;
      switch (play_again)
      {
      case 'y':
        goto restart_game;
      default:
        std::exit(0);
      }
    }


    ++round_num;
  }

  return 0;

}
