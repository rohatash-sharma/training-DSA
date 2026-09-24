#include <iostream>
using namespace std;

int sumdigit(int x,int ans=0) {
    if (x==0) return ans;
    int dig=x%10;
    ans = ans+dig;
    return sumdigit(x/10,ans);
  }
int main(){
  int x,ans;
  cin>>x;
  ans=sumdigit(x);
  cout<<ans<<endl;
}