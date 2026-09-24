#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int chk = 0;
    for(int i=0;i<n-1;i++){
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

