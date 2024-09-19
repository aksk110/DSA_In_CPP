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
int main(){
     Node a(10);
     Node b(20);
     Node c(30);
     Node d(40);
     // forming the linked list 
     a.next=&b;
     b.next=&c;
     c.next=&d;
     // b like acces kro v ko by a
     // cout<<a.next->val; // b ki value dega ye apko 
     cout<<a.next->next->next->val; // d dki value dega 40
}