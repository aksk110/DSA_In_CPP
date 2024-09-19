#include<iostream>
using namespace std;
class Node{
public:
       int val;
       Node*next;
       Node(int val){
        this->val=val;
        this->next=NULL;
       }

};
  // void deleting(Node*head,int idx){
  //   Node*temp=head;
  //   Node*ptr1=head;
  //   Node*ptr2=head->next;
  //   if(idx==1){
  //     head=head->next;
  //   }
  //   else{
  //     for(int i=1;i<idx-1;i++){
  //     ptr1=ptr1->next;
  //     ptr2=ptr2->next;
  //     }
  //     ptr1->next=ptr2->next;
  //     free(ptr2);
  //   }  
       
  // }

  Node* deleting(Node*head,Node*x){
    Node*temp=head;
    Node*ptr1=head;
    Node*ptr2=head->next;
    if(temp->val==x->val){
      head=head->next;
      return head;
    }
    else{
      while(ptr2->val!=x->val){
      ptr1=ptr1->next;
      ptr2=ptr2->next;
      }
      ptr1->next=ptr2->next;
      free(ptr2);
    }
  }  

  void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    deleting(a,d);
    display(a);
  
    

}