///Write a program to find the real roots of the quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    double disc = b*b - 4*a*c;

    if (disc >= 0) {
        double root1 = (-b + sqrt(disc)) / (2 * a);
        double root2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else {
        cout << "Roots are not real\n";
    }

    return 0;
}
