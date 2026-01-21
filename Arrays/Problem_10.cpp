////Given an array find the triplet whose sum is equal to the given number x
#include <iostream>
using namespace std;
int main(){
    int x, count = 0;
    cout << "Enter x: ";
    cin >> x;
    int arr[10] = {1,2,3,5,6,7,4,10,9,8};
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            for(int k=j+1; k<10; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    cout << "Pair " << count + 1 << " : (" << arr[i] <<", " << arr[j] << ", " << arr[k] <<")" << endl;
                    count ++;
                }
            }
        }
    }
    cout << "Total Pairs = " << count;
    return 0;
}