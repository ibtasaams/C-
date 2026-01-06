////Given the length and width of the rectangle calculate the area and perimeter of the rectangle
#include <iostream>
using namespace std;
int main()
{
    /// Store the variables
    float length, width, area, perimeter;
    /// Get the input from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    /// Use area and perimeter formula
    area = length * width;
    perimeter = 2 * (length + width);
    cout << "The area of the rectangle is " << area <<endl;
    cout << "The perimeter of the rectangle is " << perimeter <<endl;
    return 0;
}
///--------------------------------------------Copyrights--Ibtasaam Abbasi-------------------------------------------
