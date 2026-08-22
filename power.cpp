#include <iostream>
using namespace std;
int main() {
  int n;
  cin >>n ;
  int k ;
  cin >> k;
  int result = 1;
  for( k ; k>0 ;k--){
    result = result * n ;
  }
  cout << result <<endl;

}

