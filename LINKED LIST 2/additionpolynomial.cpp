#include<iostream>
using namespace std;
class Node{
public:    
    int cons;
    int exp;
    Node*next;
    Node(int cons,int exp){
        this->cons=cons;
        this->exp=exp;
        this->next=NULL;
    }
};
class Linkedlist{
public:    
    Node* head;
    Node* tail;
    int size;
    Linkedlist(int size){
        this->size=size;
        this->head=NULL;
        this->tail=NULL;
    }
    void making(){
        int x=size;
        for(int i=1;i<=x;i++){
           int cons;
           int exp;
           cout<<"enter the const ,X^power  ";
           cin>>cons>>exp;
           if(head==NULL){
            Node* t=new Node(cons,exp);
            head=tail=t;
           }
           else{
            Node*temp=new Node(cons,exp);
            tail->next=temp;
            tail=tail->next;
           }
        }
        cout<<endl;
    }
    Node* gethead(){
        return head;
    }
    void display(Node* t){
        Node* temp=t;
        while(temp!=NULL){
            cout<< temp->cons<<"  ";
            temp=temp->next;
        }
    }
    

};
  void adding (Node* x,Node* y, Node* z){
    Node* temp1=x;
    Node* temp2=y;
    Node* temp3=z;
    while(temp1!= NULL && temp2!= NULL){
        temp3->cons= temp1->cons + temp2->cons;
        temp3->exp=temp1->exp;
        temp1=temp1->next;
        temp2=temp2->next;
        temp3=temp3->next;
    }

  }
  Node* empty(int size){
    Node*head= new Node(0,0);
    Node*current=head;
    for(int i=1;i<size;i++){
        current->next=new Node(0,0);
        current=current->next;
    }
    return head;
  }
int main(){
    int n;
    cout<<" enter the maximum degree ";
    cin>>n;

    Linkedlist l1(n+1);
    Linkedlist l2(n+1);
    l1.making();
    l2.making();
    Node*ans=empty(n+1);
    adding(l1.gethead(),l2.gethead(),ans);
    Linkedlist l3(n+1);
    l3.display(ans);
   


}