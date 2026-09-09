#include <iostream>
using namespace std;
struct node{
  int data;
  node* next;
};

int main(){
  node* head =new node{10,nullptr};
  head->next=new node{20,nullptr};
  head->next->next=new node{30,nullptr};
  head->next->next->next=new node{40,nullptr};

  node *next=nullptr;
  node *curr=head;
  node *prev=nullptr;

  while(curr!=nullptr){
    next = curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  head=prev;


  node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

