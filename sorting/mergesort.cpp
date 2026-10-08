#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int left,int mid,int right){
  int j=mid+1;
  int i=left;
  int k=left;
  vector<int> mergerd;
  while(i<=mid && j<=right){
    if(arr[i]<=arr[j]){
      merged.push_back(arr[i++]);
    }
    else{
      merged.push_back(arr[j++]);
    }
  }
  while(i<=mid){
    merged.push_back(arr[i++]); 
   }
  while (j <= right) {
        merged.push_back(arr[j++]);
    }
  for(int index=left;index<=right;index++){
    arr[index]=merged[index-left];
  }
}
void mergesort (int arr[],int left,int right){
  if (left>=right) return;
  int mid=left+(right-left)/2;
  mergesort(arr,left,mid);
  mergesort(arr,mid+1,right);
}
int main(){
  
}