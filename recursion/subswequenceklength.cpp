#include <iostream>
#include <string>
using namespace std;

void subsequence(const string& s,int index,int k,string& current){
  if(current.length()==k){
    cout<<current<<endl;
  }
  if(index==s.length()){
    return;
  }
  current.push_back(s[index]);
  subsequence(s,index+1,current);
  current.pop_back(s[index]);
  subsequence(s,index+1,current);
}
yht
int main(){
  string s="abc";
  string current="";
  
  
}