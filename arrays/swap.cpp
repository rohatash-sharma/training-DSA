#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=1;
    int i=0;
    while(j<n){
      arr[i]=arr[i]+arr[j];
      arr[j]=arr[i]-arr[j];
      arr[i]=arr[i]-arr[j];
      i=i+2;
      j=j+2;
    }    
    for(int i=0;i<n;i++){      
      cout << arr[i] << " ";
    }
  }

