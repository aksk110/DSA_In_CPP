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
Node insertAtBeg(Node*head,int val){
    Node*t=new Node(val);
    t->next=head;
    head=t;
    return *head;
}
void Display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
   Node*x=&insertAtBeg(a,100);
   Display(x);



}