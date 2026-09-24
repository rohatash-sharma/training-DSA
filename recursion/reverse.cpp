#include <iostream>
using namespace std;

int reverse(int x,int ans=0) {
    if (x==0) return ans;
    int dig=x%10;
    ans = ans*10 +dig;
    x=x/10;
    reverse(x,ans);
  }
int main(){
  int x,ans;
  cin>>x;
  ans=reverse(x);
  cout<<ans<<endl;
}