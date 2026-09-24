#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr,int n,int index=0){
  if (n==index){
    return;
  }
  print(arr,n,index+1);
  cout<<arr[index]<<" ";
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