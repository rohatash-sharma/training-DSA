#include <iostream>
using namespace std;
int main() {
  int arr[] = {2,3,4,6,7,5};
  int sumeven = 0;
  int productodd = 1;
  for (int i =0 ; i <6 ; i++){
     if (i%2==0){
      sumeven = sumeven + arr[i];
    
}
    else{
      productodd = productodd * arr[i];
    }
  }
  cout << "Sum of even numbers: " << sumeven << endl;
  cout << "Product of odd numbers: " << productodd << endl;
}



