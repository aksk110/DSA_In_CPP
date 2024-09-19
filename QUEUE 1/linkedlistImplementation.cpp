// Linked list implementation
#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class queue{
public:
    Node*head;
    Node*tail;
        
        queue(){
            this->head=NULL;
            this->tail=NULL;
        }
        void push(int val){
            Node* t = new Node(val);
            if(head == NULL){
                head=t;
                tail=t;
            }
            else{
                tail->next=t;
                tail=tail->next;
            }
        }
        void pop(){
            if(head==NULL) cout<<" sorry queue is empty "<<endl;
            Node*temp=head;
            head=head->next;
           delete(temp);// dlete for wasting the memory;
        }
        void front(){
            if(head==NULL) cout<<" sorry queue is empty "<<endl;
            cout<<head->val<<endl;
        }
        void size(){
            if(head==NULL){
                cout<<" 0 "<<endl;
               return;
            }
            Node*temp=head;
            int x=0;
            while(temp!=NULL){
                x++;
                temp=temp->next;
            }
           delete(temp);
            cout<<x<<endl;
        }
        void display(){
            Node*temp=head;
            while(temp!=NULL){
                cout<<temp->val<<"  ";
                temp=temp->next;
            }
        delete(temp);
            cout<<endl;
        }
        void back(){
            cout<<tail->val<<endl;
        }

};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.size();
    q.pop();
    q.size();
}