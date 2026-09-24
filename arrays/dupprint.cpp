#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for(int p =0; p<n;p++){
        i=p+1;
        for (; i<n;i++){
            if (arr[p]==arr[i]){
            cout<< arr[i] << " is the duplicate"<<endl;
        }
    }
    
}
}

