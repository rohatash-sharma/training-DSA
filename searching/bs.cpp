#include <iostream>
using namespace std;
int main (){
  int n,k;
  cin >>n;
  cin>>k;
  int arr[n];
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int m,l,f;
  f=0;
  l=n-1;
  while(f<=l){
    m=l+(f-l)/2;
    if(arr[m]==k){
      cout<<"found at  "<<m;
      break;
    }
    else if (k<arr[m]){
      l=m-1;
    }
    else if(k>arr[m]){
      f=m+1;
    }
  }
}
