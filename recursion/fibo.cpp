#include <iostream>
using namespace std;
int fibo(int n){
  int ans;
  if (n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  ans=fibo(n-1)+fibo(n-2);
  return ans;

}

int main(){
  int n,ans;
  cin>>n;
  ans=fibo(n);
  cout<<ans<<endl;
}
