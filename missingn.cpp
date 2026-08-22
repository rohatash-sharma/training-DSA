#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int total=n*(n+1)/2;
    int i=0;
    int mis=0;
    while(i<n){
        sum = sum +arr[i];
        i++;
    }
    mis=sum-total;
    if (mis==0){
        cout<<"no number is missing";

    }
    else{
        cout<< mis << " is the missing numbrer";
    }
    }

    

  

