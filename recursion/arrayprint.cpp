#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr,int n,int index=0){
  if (n==index){
    return;
  }
  cout<<arr[index]<<" ";
  print(arr,n,index+1);
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  print(arr, n);
}