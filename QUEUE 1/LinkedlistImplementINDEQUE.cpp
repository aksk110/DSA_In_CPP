#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node* next;
    Node* prev;
            Node(int val){
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }          
};
class Deque{
public:    
    Node* head;
    Node* tail;
        Deque(){
            head=NULL;
            tail=NULL;
        }

        void push_front(int val){
           Node* t= new Node(val);
           if(head==NULL){
            head=t;
            tail=t;
           }
           else{
            t->next=head;
            head->prev=t;
            head=t;
           }
        }
        void push_back(int val){
            Node*t=new Node(val);
            if(tail==NULL){
                tail=t;
            }
            else{
            tail->next=t;
            t->prev=tail;
            tail=t;
            }
        }
        void front(){
            if(head==NULL) cout<<" sorry! "<<endl;
            else cout<<head->val<<endl;
        }
        void back(){
            if(tail==NULL) cout<<" sorry! "<<endl;
            else cout<<tail->val<<endl;
        }
        void pop_front(){
             if(head==NULL) cout<<" sorry! "<<endl;
            Node*temp=head;
            head=head->next;
            head->prev=NULL;
            delete(temp);
        }
        void pop_back(){
            if(tail==NULL) cout<<" sorry! "<<endl;
            Node*temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete(temp);
        }
        void size(){
            Node* temp = head;
            int x=0;
            while(temp!=NULL){
                x++;
                temp=temp->next;
            }
            cout<<x<<endl;
        }
        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
 };
int main(){
    Deque dq;
    dq.push_front(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_back(40);
    dq.push_front(50);
    dq.push_back(60);
    dq.display();

}