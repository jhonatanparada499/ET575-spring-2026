/*
Jhonatan Stiven Parada Torres
March 9, 2026
*/

#include <iostream>
// #include <string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main()
{
  cout << "------ EXAMPLE 1 ------" << '\n';

  int i = 0;
  while (i<=5)
  {
    cout << i << '\t';
    ++i;
  }
	cout << '\n';

  cout << "------ EXAMPLE 2 ------" << '\n';

  int m = 3;
  while (m>=0)
  {
    cout << m << '\t';
    --m;
  }
	cout << '\n';

  cout << "------ EXAMPLE 3 ------" << '\n';

  m = 3;
  while (m-- >=0)
  {
    cout << m << '\t';
  }
	cout << '\n';

  cout << "------ EXAMPLE 4 ------" << '\n';

  m = 3;
  while (--m >=0)
  {
    cout << m << '\t';
  }
	cout << '\n';

  cout << "------ EXAMPLE 5 ------" << '\n';

  int n;
  cout << "Enter a number: ";
  cin >> n;
  while (!(n>=10 && n<=20))
  {
    cout << "Enter a num between 10 and 20: ";
    cin >> n;
  }
  cout << "Entered num: " << n << '\n';

  cout << "------ EXAMPLE 6 ------" << '\n';

  char choice = 'y';
  do
  {
    cout << "Enter a num: ";
    cin >> n;
    cout << n << " is " 
         << ((n%2==0) ? "EVEN" : "ODD") // DON'T REMOVE OUTER PARENTHESIS. 
         << "!" << '\n';                // ? has higher precedence than <<
    cout << "continue? ";
    cin >> choice;
  } while (tolower(choice) == 'y');
  
  cout << "------ EXAMPLE 7 ------" << '\n';

  int number;
  do
  {
    cout << "Enter a positive num: ";
    cin >> number;
  } while (number <= 0);
  
  cout << "------ EXAMPLE 8 ------" << '\n';

  int loopCounter = 1, sumNegative = 0, num;
  do
  {
    cout << "Enter a negative num: ";
    cin >> num;
    if (num < 0)
    {
      sumNegative += num;
      ++loopCounter;
    } else
    {
      cout << "A non-negative num was entered."
           << '\n';
      break;
    }
  } while (loopCounter <= 4);
  cout << "Total sum: " << sumNegative << '\n';
  
  cout << "------ EXAMPLE 9 ------" << '\n';

  int balance = 1000, w = 0;
  cout << "Current balance: " << balance << '\n';
  while (true)
  {
    cout << "How much to withdraw? ";
    cin >> w;
    if (w == 0)
    {
      cout << "balance: " << balance << '\n';
      break;
    }
    if (w > balance)
    {
      cout << "Not allowed. Enter other amount or 0 to exit: "
           << '\n';
    } else
    {
      balance -= w;
      cout << "balance: " << balance << '\n';
    }
  }
  
  cout << "------ EXERCISE 1 ------" << '\n';
 
  int userNumber = 0, userSum = 0;
  cout << "Enter a number: ";
  while ((cin >> userNumber) && userNumber)
  {
    userSum += userNumber;
    cout << "Enter a number: ";
  }
  cout << "The total user sum is "
       << userSum << endl;

  return 0;
}