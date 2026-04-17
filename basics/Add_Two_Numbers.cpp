// All rights reserved copyright Ibtasaam Abbasi
/*Declare three integer variables, number1, number2 and sum. Initialize
the values of number1 to 10 and number2 to 25. Add them and store their values
in sum. Print this sum. Verify that the output is 35 by outputting it on
screen.*/
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int number1, number2, sum;
  number1 = 10;
  number2 = 25;
  sum = number1 + number2;
  /* Displaying output to the console */
  cout << "The sum of " << number1 << " and " << number2 << " is " << sum
       << endl;
  return 0;
}
