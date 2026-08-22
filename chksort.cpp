#include  <iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int chk = 0;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            chk = 1;
        }
    }
    if(chk==0){
        cout << "yes sorted array"<< endl;
    }
    else {
        cout << "not sorted array"<< endl;
    }
}