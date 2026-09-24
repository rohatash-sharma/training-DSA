#include <iostream>
#include <stack>

using namespace std;

int main(){
  stack<int> st;
  int top=-1;
  int n,number,dltcnt ,find;
  cout << "total number of values"<<endl;
  cin>> number;
  while(number != 0){
    cin>>n;
    cout<<"enter value to add"<<endl;
    top++;
    st.push(n);
    number--;
  }
  cout<<"total number of values to delete"<<endl; 
  cin>>dltcnt;
  while(!st.empty() && dltcnt !=0){
    st.pop();
    top--;
    dltcnt--;
  }
  cout<<"number to find"<<endl;
  while(!st.empty()){
    if(st.top()==find){
      cout<<top<<"at this position"<<find<<"is present"<<endl;
      break;
    }
    else{
      top--;
    }
  }
}
