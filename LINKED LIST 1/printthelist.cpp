#include<iostream>
using namespace std;
class  Node{
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
    // connecting the node 
    a.next=&b;
    b.next=&c;
    c.next=&d;
    
    // traversing the LL and print 
    Node temp=a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}