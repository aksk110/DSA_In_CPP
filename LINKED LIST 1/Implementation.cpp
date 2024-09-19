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
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtBeg(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        Node*temp=new Node(val);
        if(idx<0 || idx>>size){
            cout<<" Error "<<endl;
        }
        else if(idx==0) insertAtBeg(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node*temp=new Node(val);
        }

    }

    void Display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Linkedlist *l1=new Linkedlist();
    l1->insertAtEnd(20);
    l1->insertAtEnd(30);
    l1->insertAtEnd(40);
    l1->insertAtEnd(50);

    l1->Display();
    l1->insertAtBeg(100);
    l1->Display();


}