#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  int temp[k];
  int j=0;
  for (int i=n-k;i<n;i++){
    temp[j]=arr[i];
    j++;
  }
  for(int i=n-1;i>=k;i--){
    arr[i]=arr[i-k];
  }
  for(int i=0;i<k;i++){
    arr[i]=temp[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
