////Write a program to get the input name from the user and Greet him/her
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username;
    cout << "Enter your username: ";
    getline(cin, username);
    cout << "Welcome " << username << "!\n";
    return 0;
}
///--------------------------------------------Copyrights--Ibtasaam Abbasi-------------------------------------------