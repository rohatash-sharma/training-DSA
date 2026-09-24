#include <iostream>
using namespace std;

int main(){
    int largest =0;
    int slargest =0;
    int arr[8]={2,5,6,8,9,12,13,7};
    for(int i = 0; i<7;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }

    }
    cout<< slargest << endl;

}