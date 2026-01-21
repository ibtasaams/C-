/*Given an array of integers, change the value of all odd indexed elements t
to its second multiple and increment all even indexed values by 10.*/
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {1,2,3,4,5,6,7};
    for(int i=0; i<7; i++){
        if(i % 2!=0){
            arr[i]*=2;
        }
        else{
            arr[i] +=10;
        }
    }
    ///Print the new array
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}