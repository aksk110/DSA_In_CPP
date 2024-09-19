#include<iostream>
#include<climits>
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
void display(Node* root){ // reccursive
    if(root==NULL) return;
    cout<<root->val<<"  ";
    display(root->left);
    display(root->right);
}

int  sum(Node* root){
    if(root == NULL) return 0;
    return  root->val + sum(root->left) + sum(root->right); // recursion  laga do apka bhai 
    
}int count=0;
int size(Node* root){
    if(root == NULL) return 0;//return count;
    //  count++;
    //  size(root->left);
    //  size(root->right);
    return 1 + size(root->left) + size(root->right);
}
int maxIn(Node* root){
    if(root==NULL) return INT_MIN;
    int left=maxIn(root->left);
    int right=maxIn(root->right);
    return  max(root->val,max(left,right)); // hamesha apki comparion do se hi hogi hence 
}
// product of the all node 
int product(Node* root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}
// minimum finding;
int minIn(Node* root){
   if(root==NULL) return INT_MAX;
   int leftm=minIn(root->left);
   int rightm=minIn(root->right);
   return min(root->val,min(leftm,rightm)); 
}
// finding the level 
int levels(Node* root){
    if(root == NULL) return 0 ;
    return   1 + max(levels(root->left),levels(root->right));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c=  new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
   
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->left=h;
    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxIn(a)<<endl;
    cout<<product(a)<<endl;
    cout<<minIn(a)<<endl;
    cout<<levels(a)<<endl; // height == level -1  hota hai apka ;
    
}
