/// Write a program to calculate the area and perimeter of a rectangle
#include <iostream>
using namespace std;
int main()
{
    float area, perimeter, length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "The area of rectangle is " << area << endl;
    cout << "The perimeter of rectangle is " << perimeter;
    return 0;
}