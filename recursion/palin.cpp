#include <iostream>
using namespace std;

int plaindrome(int x,int ans=0) {
    if (x==0) {
      if(ans==x){return 1;}
      return 0;;
    }
    int dig=x%10;
    ans = ans*10 +dig;
    x=x/10;
    palindrome(x,ans);
  }
int main(){
  int x,ans;
  cin>>x;
  ans=reverse(x);
  cout<<ans<<endl;
}