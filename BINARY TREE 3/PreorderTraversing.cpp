#include<iostream>
#include<climits>
#include<stack>
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
void preorder(Node* root){
    stack<Node*>st;
    st.push(root);
    while(st.size() > 0){
        Node* temp=st.top();
        st.pop();
        cout<<temp->val<<"  ";
        if(temp->right!=NULL)st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
}

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
    preorder(a);
}