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
void display( Node* root,int curr,int level){
    if(root == NULL) return ;
    if(curr == level){
        cout<<root->val<<"  ";
        return;
    }
   display(root->left,curr + 1,level);
   display(root->right,curr + 1,level);

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
    display(a,1,3); // hum root node ko is case me 1 man rhe hai ;
}