#include <stdio.h>
#include <stdlib.h>
void countsort(int arr[],int size){
  int max=arr[0];
  for (int i=1;i<size;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  int *count=(int*)calloc(max+1,sizeof(int));
  if(count ==NULL){
    printf("memory allocation failed\n");
    return;
  }
  for (int i=0;i<size;i++){
    count[arr[i]];
  }
  
}