#include<iostream>
using namespace std;;
class Node{
public:    
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int count=0;
int Size(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

 void RemovefromEnd(int k,int n,Node*head){
       Node*ptr1=head;
       Node*ptr2=head->next;
       if(k==n){
        head=ptr2;
       }
       for(int i=1;i<n-k;i++){
           ptr1=ptr1->next;
           ptr2=ptr2->next;
       }
       ptr1->next=ptr2->next;
       free(ptr2);
 }
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    return;
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
   RemovefromEnd(3,Size(a),a);
   display(a);
    
}