#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid ;
    if(n%2==0){
      mid = n/2;
    }
    else{mid=(n+1)/2;

    }
    for(int i=0;i<mid;i++){      
      cout << arr[i] << " ";
    }
  }

