
#include <iostream>

using namespace std;
//idk how to do this

int main()
{
  int max = 100;
  srand(time(0));
  int number = rand()%max;
  cout << number;

  int guess;
  cout << " ";
  cin >> guess;

  if (guess < number)
    {
      cout << "guess too small";
    }
  else
    {
      cout << "guess too large";
    }
}
