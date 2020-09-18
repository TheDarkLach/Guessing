//Guesing game by Faizan Karim
#include <iostream>

using namespace std;
//idk how to do this
//nvm i figured it out

int main()
{
  //ints to track
  int num, guess;
  bool stillPlaying = true;
  srand(time(0));

   while (stillPlaying == true)
    {
      //these need to be in while loop for play again
      int guesses = 0;
      num = rand() % 100;
      //repeats if guessed wrong
      do
        {
          cout << "\nGuess between 0 and 100 : ";
          cin >> guess;
          guesses++;
          //logic
          if (guess > num)
	    //if its greater its too high
	    {
	      cout << "\nToo high\n";
	    }
          else if (guess < num)
	    //if its less its too low
	    {
	      cout << "\nToo low\n";
	    }
          else
	    //guessed right
	    {
	      cout << "\nYou guessed in " << guesses << " tries\n\n";
	    }
      
        }while (guess != num);
	//play again code
      char f;
      cout << "Do you want to play again? Y/N\n\n";
      cin >> f;
      if (f == 'y')
	{
	  stillPlaying = true;
	}
	else
	  {
	    stillPlaying = false;
	  }
	  
    }
  return 0;
 }
