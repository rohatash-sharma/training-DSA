#include <iostream>
using namespace std;

int printnto1(int n){
  if(n==0){
    return 1;
  }
  cout<<n<<" ";
  printnto1(n-1);
  return 0;
}
int main(){
  int n;
  cin>>n;
  printnto1(n);
}