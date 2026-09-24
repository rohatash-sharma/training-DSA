#include <iostream>
#include <vector>
using namespace std;

void merge(arr[],int left,int mid,int right){
  int j=mid+1;
  int i=left;
  int k=left;
  vector<int> mergerd;
  while(i<=mid && j<=right){
    if(arr[i]<=arr[j]){
      merged[k++]=arr[i++]
    }
  }
  while(i<=mid){
    merged[k++]=arr[i++];
  }
  for(int index=left;index<=right;index++){
    arr[index]=merged[index];
  }
}
void mergesort (arr[],left,right){
  if (left>=right) return;
  int mid=left+(right-left)/2;
  mergesort(arr,left,mid);
  mergesort(arr,mid+1,right);
}
