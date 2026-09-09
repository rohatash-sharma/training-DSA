#include <iostream>
using namespace std;
struct node{
  int data;
  node* next;
};

int main(){
  node *head=nullptr;
  node *tail=nullptr;
  cout<<" 0 for instertion at head and any other for insertionat at tail"
  cin>>q;
  if(q==0){
    if(head==nullptr){
    head=new node(20);

  }
  else{    
    node *temp;
    temp=new node(30);
    temp->next=head;
    head=temp;
  }
}
else{
  if(tail==nullptr){
    tail=new node(20);
  }
  tail->next=new node(20);
  tail=tail->next;
}

}

