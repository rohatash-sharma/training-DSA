#include <iostream>
using namespace std;
int main(){
  int m,n,ele;
  cout<<"enter m";
  cin>>m;
  cout<<"enter n";
  cin>>n;
  int arr[m][n];
  int flag=0;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<n;
      cout<<m;
      cout<<"enter element of index"<<i<<j<<" " ;
      cin>>arr[i][j];
    }
  }
  cout<<"enter element to search";
  cin>>ele;
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]==ele){
        cout<<i<<j;
        flag=1;
        break;
      }
    }
    if(flag==1){
      break;
    }
  }
}