
#include <iostream>

using namespace std;
//idk how to do this
//nvm i figured it out

int main()
{
  //ints to track
  int num, guess, guesses = 0;
  srand(time(0));
  num = rand() % 100;
  cout << "Guess the number\n\n";

  //repeats if guessed wrong
  do
    {
      cout << "Guess between 0 and 100 : ";
      cin >> guess;
      guesses++;

      if (guess > num)
	{
	  cout << "Too high\n\n";
	}
      else if (guess < num)
	{
	  cout << "Too low\n\n";
	}
      else
	{
	  cout << "\n You guessed in\n" << guesses << "\ntries\n";
	}
      
    }while (guess != num);
  return 0;
}
