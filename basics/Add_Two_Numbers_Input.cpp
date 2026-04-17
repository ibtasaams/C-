// All rights reserved copyright Ibtasaam Abbasi
/*
Declare three integer variables, number1, number2 and sum. Input
number1 and number2 from the user. You can use the construct: cin >> number1;
to input a value into this variable called ‘number1’. Now place the sum of these
two numbers in the variable sum and output it using cout.
*/
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int num1, num2, sum;
  cout << "Enter first number: ";
  /* Getting user input and storing it */
  cin >> num1;
  cout << "Enter second number: ";
  /* Getting user input and storing it */
  cin >> num2;
  sum = num1 + num2;
  /* Displaying output to the console */
  cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
  return 0;
}