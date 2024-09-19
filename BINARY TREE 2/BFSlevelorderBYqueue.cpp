#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left; // ye left chalega 
    Node* right; // ye right chalega apka 
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c=  new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    // Node* h = new Node(8);
   
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g; 
    queue <Node*> q;
    Node*temp=a;
    q.push(temp); // level order traversal   ....
    while(q.size() > 0){ // BFS   ....
        Node* temp = q.front();
        cout<<q.front()->val<<" ";
        q.pop();
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right!= NULL) q.push(temp->right);

    }

  
}