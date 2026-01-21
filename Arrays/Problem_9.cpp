///Find the total no of pairs in the array whose sum is equal to the given no x
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter x: ";
    cin >> x;
    int count = 0;
    int arr[8]= {1,2,3,4,5,6,7,8};
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(x == arr[i] + arr[j]){
                cout << "Pair "<< count+1 << " : (" << arr[i] << ", " << arr[j] << ")" <<endl;
                count ++;
            }
        }
    }
    cout << "Total Pairs = "<< count;
    return 0;
}