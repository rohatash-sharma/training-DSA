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
  string vowel="aeiouAEIOU";
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
  string sp="abbdcdbba";
  char ch;
  cin>>ch;
  for (int i=0;i<sp.size();i++){
    if (sp[i]==ch){
      sp.erase(sp.begin() + i);
    }

  }
  for (int i=sp.length();i>0;i--){
    if(sp[i]==ch){
      sp.erase(sp.begin() + i);
    }
  }
   int j=sp.length();
   int i=0;
   while (i<j){
    swap(sp[i],sp[j]);
    i++;
    j--;
   }
   int i=0;
   int j= sp.length();
   while(i<=j){
    int flag=0;
    if(sp[i]!=sp[j]){
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