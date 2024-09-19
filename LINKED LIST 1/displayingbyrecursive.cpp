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
 void display(Node*head){
    if(head==NULL) return;
    cout<<head->val<<"  ";
    display(head->next);
   
}

// recursive reverse order  

void reverse_display(Node*head){
    if(head==NULL) return;
    reverse_display(head->next);
    cout<<head->val<<"  ";
}

int main(){
    Node* a=new Node(18);
    Node* b=new Node(20);
    Node* c=new Node(40);
    Node* d=new Node(60);

    a->next=b;
    b->next=c;
    c->next=d;
    
    // diplaying recursive;
    display(a);
    cout<<endl;
    reverse_display(a);
}