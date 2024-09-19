#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node* next;
      Node(int  val){
        this->val=val;
        this->next=NULL;
      }
};
class  stack{
public:    
     Node* head;
     Node* tail;
     stack (){
        head=NULL;
    }
    // void making(){
        
    //     for(int i=0;i<size;i++){
    //         if(head==NULL){
    //             Node* temp= new Node(0);
    //             head=tail=temp;
    //         }
    //         else{
    //             Node*temp = new Node(0);
    //             tail->next=temp;
    //             tail=tail->next;
    //         }
    //     }
    // }
    void push(int val){
        Node*t = new Node(val);
        t->next = head;
        head=t;
    }

    void pop(){
        if(head==NULL){
            cout<<" your stack is empty sorry "<<endl;
            return; 
        }
      head=head->next;
    }

    int top(){
        if(head==NULL){
            cout<<" your stack is empty sorry  "<<endl;
            return -1;
        }
        return head->val;
    }
    int c=0;
    int size(){
        Node* temp= head;
        while(temp!= NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
};
int main(){
   stack st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.pop();
   cout<<st.top()<<endl;
   cout<<st.size()<<endl;

}
