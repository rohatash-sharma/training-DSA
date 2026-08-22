#include <iostream>
using namespace std;


int main() {
  int num;
  cin>> num;
  int chk = num;
  int n;
  int sum = 0;
  while (num>0){
    n = num % 10;
    int fact = 1;
    for (n; n>0; n--){
      fact = fact * n;
    }
    sum = sum + fact;
    num = num/10;
  }
  if (chk ==sum){
    cout<<"strong num"<< endl;
  }
  else cout<<"not a strong num"<< endl ;

}