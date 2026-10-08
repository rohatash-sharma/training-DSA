#include <iostream>
#include <string>
using namespace std;

void subsequence(const string& s,int index,string& current){
  if(index==s.length()){
    if(current.empty()){
      cout<<"empty"<<endl;
    }
    else{
      cout<<current<<endl;
    }
    return;
  }
  current.push_back(s[index]);
  subsequence(s,index+1,current);
  current.pop_back(s[index]);
  subsequence(s,index+1,current);
}

int main(){
   
}