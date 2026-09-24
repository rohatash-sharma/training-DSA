#include <iostream>
using namespace std;

int print1ton(int n){
  if(n==0){
    return 1;
  }
  print1ton(n-1);
  cout<<n<<" ";
  return 0;
}
int main(){
  int n;
  cin>>n;
  print1ton(n);
}