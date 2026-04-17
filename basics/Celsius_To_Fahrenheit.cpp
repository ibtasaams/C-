// All rights reserved copyright Ibtasaam Abbasi
////Write a program to convert the degree celsius temperature to fahrenhiet
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  float fahrenhiet_temp, celsius_temp, kelvin_temp;
  cout << "Enter the temperature in celsius: ";
  /* Getting user input and storing it */
  cin >> celsius_temp;
  fahrenhiet_temp = (9.0 / 5.0) * celsius_temp + 32;
  kelvin_temp = celsius_temp + 273;
  cout << "The temperature in Kelvin's is " << kelvin_temp << "K" << endl;
  cout << "The temperature in Fahrenhiet is " << fahrenhiet_temp << "" << endl;
  return 0;
}