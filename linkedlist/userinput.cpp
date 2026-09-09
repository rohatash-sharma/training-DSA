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
  cout<<"element to search";
  int p;
  cin>>p;
  int count=0; 
  node* temp=head;
  while(temp!=nullptr){
    count++;
    if(temp->data==p){
      cout<<"position at "<<count;
    }
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<< count <<" ";

  temp=head;
  for(int i=0;i<count/2;i++){
    temp=temp->next;
  }
  if (temp!=nullptr){
    cout<< "middle node "<<temp->data<<endl;
  }
}

