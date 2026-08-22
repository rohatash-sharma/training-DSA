#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  string s;
  cin>>s;
  cout << s<<endl;
  string es;
  es="\\n";
  string es2;
  es2="\\0";
  cout << es<<endl;
  cout << es2<<endl;
  string vowel="aeiouAEIOU"
  int vcnt=0;
  int ccnt=0;
  for(int i=0;i<s.length();i++){
    int flag=0;
    for (int j=0;j<vowel.length();j++){
      if (s[i]==vowel[j]){
        flag=1;
      }
      if(flag==1){
        vcnt=vcnt+1;

      }
      else{
        ccnt=ccnt+1;
      }
    }

  }
  string s="abbdcdbba"
  char ch;
  cin>>ch;
  for (int i=0;i<s.size();i++){
    if (s[i]==ch){
      s.erase(s.begin() + i);
    }

  }
  for (int i=s.length();i>0;i--){
    if(s[i]==ch){
      s.erase(s.begin() + i);
    }
  }
   int j=s.length();
   int i=0;
   while (i<j){
    swap(s[i],s[j]);
    i++;
    j--;
   }
   int i=0;
   itn j= s.length();
   while(i<=j){
    int flag=0;
    if(s[i]!=s[j]){
      flag=1;
      break;
    }
   }
   if(flag==1){
    cout<<"not palindrome";
   }
   else{
    cout <<"palindrome";
   }
}