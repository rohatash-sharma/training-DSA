#include <iostream>
using namespace std;

void divide(vector <int>& arr,int high,int low){
  int pivot=arr[high];
  int i=low-1;
  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);  
    return i + 1;
}
void quicksort(vector <int>& arr,int high,int low){
  if(low<high){
    int d=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
  }
}
int main(){
  
}