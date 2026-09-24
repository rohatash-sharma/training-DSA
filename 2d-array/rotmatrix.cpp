#include <iostream>
using namespace std;
int main(){
  int m,n;
  cin>>m;
  cin>>n;
  int arr[m][n]; 
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }  
  int d;
  cin>>d;
  if(d>3){
     d=d%4;
  } 
  while(d>0){
    for(int i=0; i<m;i++){
      for(int j=i;j<n;j++){
      swap(arr[i][j],arr[j][i]);
    }
    d--;
  } 
  }
  for(int i=0; i<m;i++){
    for(int j=0;j<1;j++){
      swap(arr[i][j],arr[i][2+j]); 
    }
  }
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
    cout<<arr[i][j];
    }
    cout<<endl;
  }

}