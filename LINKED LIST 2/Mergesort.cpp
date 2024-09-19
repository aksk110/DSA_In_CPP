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
class Linkedlist{
public:    
    Node*head;
    Node*tail;
         Linkedlist(){
            this->head=NULL;
            this->tail=NULL;
         }
    void making(int n){
      for(int i=0;i<n;i++){
        int val;
        cout<<" enter the val ";
        cin>>val;
        if(head==NULL){
            Node* t=new Node(val);
            head=tail=t;
        }
        else {
            Node*temp=new Node(val);
            tail->next=temp;
            tail=temp;
        }

      }
    }
    Node* merge(Node* x1,Node* x2){
        Node* a1=x1;
        Node* a2=x2;
        Node* x=new Node(-1);
        Node* xc=x;

        while(a1!=NULL && a2!= NULL){
            if(a1->val< a2->val){
                xc->next=a1;
                a1=a1->next;
                xc=xc->next;
            }
            else{
                xc->next=a2;
                a2=a2->next;
                xc=xc->next;
            }
        }
        if(a1==NULL){
            while(a2!=NULL){
                xc->next=a2;
                a2=a2->next;
                xc=xc->next;
            }
        }
        else{
            while(a1!=NULL){
                xc->next=a1;
                a1=a1->next;
                xc=xc->next;
            }
        }
        x=x->next;
        return x;
    }
    Node* mergesort(Node* l1){
        if(l1==NULL || l1->next==NULL) return l1;
        Node* ptr1=l1;
        Node* ptr2=l1;
        while(ptr2->next!=NULL && ptr2->next->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;    
        }
        Node*a= l1;
        Node*b=ptr1->next;
        ptr1->next=NULL;

       a= mergesort(a);
       b= mergesort(b);

       Node*c=merge(a,b);
       return c;
    }
    Node* giveHead(){
        return head;
    }
};
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<" enter the size of list ";
    cin>>n;
    Linkedlist l1;
    l1.making(n);
    display(l1.giveHead());
    Node*d=l1.mergesort(l1.giveHead());
    display(d);
}