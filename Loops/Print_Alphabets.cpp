// All rights reserved copyright Ibtasaam Abbasi
/// Write a C program to print all alphabets from a to z. - using while loop
#include <iostream>
using namespace std;
/*
 * Main Execution Block
 * This is where the program starts running.
 */
int main() {
  int char_num = 65;
  int i = 1;
  while (i <= 26) {
    cout << static_cast<char>(char_num) << endl;
    char_num++;
    i++;
  }
  return 0;
}