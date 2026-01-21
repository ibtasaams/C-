///Given the radius of the sphere find the volume and surface area of the sphere
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    const float pi = M_PI; 
    float radius,volume, suface_area;
    cout << "Enter the radius: ";
    cin >> radius;
    volume = (4.0/3.0)*pi*pow(radius,3);
    suface_area = 4*pi*(radius*radius);
    cout << "Volume: " << fixed << setprecision(2) <<volume << endl;
    cout << "Surface Area: " << fixed << setprecision(2) << suface_area << endl;
    return 0;
}