#include <iostream>
using namespace std;

int fact(int n){
  int ans;
  if (n==0){
    return 1;
  }
  if (n==1){
    return 1;
  }
  
  ans=fact(n-1)*n;
  return ans;
}

int main(){
  int n,ans;
  cin>>n;
  ans=fact(n);
  cout<<ans<<endl;

}