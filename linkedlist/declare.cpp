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

  node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

