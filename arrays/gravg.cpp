#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float avg =0;
    for(int i=0;i<n;i++){
      avg= avg + arr[i];
    }
    avg = avg/n;

    for(int i=0;i<n;i++){
      if(arr[i]>avg){
        cout << arr[i] << " ";
      }
      }
  }



