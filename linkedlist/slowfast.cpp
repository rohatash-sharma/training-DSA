
#include <iostream>
using namespace std;
struct node{
  int data;
  node* next;
};

int main(){
  int n ;
  cin>>n;
  int val;
  node* head=nullptr;
  node* tail=nullptr;
  if(n>0){
    for (int i=0;i<n;i++){
      cin>>val;
      node *newnode=new node{val,nullptr};
      if (head==nullptr){
        head=newnode;
        tail=newnode;
      }
      else{
        tail->next=newnode;
        tail=newnode;
        
      }
    }

  }
  node *slow=head;
  node *fast=head;

  while(fast!=nullptr && fast->next!=nullptr){
    slow=slow->next;
    fast=fast->next->next;
  }
  cout << "middle point is "<<slow->data;


}