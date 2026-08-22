#include <iostream>
using namespace std;
int main(){
  int n ,l,f,m,target;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>target;
  f=0;
  l=n-1;
  while(f<=l){
    m=f+(l-f)/2;
    if (arr[f]<=target && target<=arr[m]){
      if(arr[f]==target){
        cout << target<<"is present at"<<f;
        break;
      }
      if(arr[m]==target){
        cout << target<<"is present at"<<m;
        break;
      }
      else{
        if (target<arr[m]){
          l=m-1;
        }
        else if(target>arr[m]){
          f=m+1;
        }
      }

    }
    else if (arr[m]<=target && target<=arr[l]){
      if(arr[m]==target){
        cout << target<<"is present at"<<m;
        break;
      }
      else if(arr[l]==target){
        cout << target<<"is present at"<<l;
      }
      else{
        if (target<arr[l]){
          l=m-1;
        }
        else if(target>arr[m]){
          f=m+1;
        }
      }
    }
  }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}
      