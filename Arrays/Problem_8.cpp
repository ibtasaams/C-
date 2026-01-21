#include <iostream>
using namespace std;

int main() {
    int x, count = 0;
    cout << "Enter x: ";
    cin >> x;

    int arr[5] = {1, 4, 5, 8, 2};

    for (int i = 0; i < 5; i++) {   // fix here
        if (arr[i] > x) {
            count++;
        }
    }

    cout << count;
    return 0;
}
