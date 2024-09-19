#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size() > 0 && i < n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != 0) l = new Node(arr[i]);
        else l =NULL;
        if(arr[j] != 0) r = new Node(arr[j]);
        else r = NULL;
        temp->left=l;
        temp->right=r;
        if(temp->left != NULL)  q.push(l);
        if(temp->right != NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;


}
// void levelorder(Node* root){
//     queue<Node*> q;
//     q.push(root);
//            while(q.size() > 0){
//             Node*temp = q.front();
//                q.pop();
//             cout<< temp->val<<" ";
//             if(temp->left != NULL) q.push(temp->left);
//             if(temp->right != NULL) q.push(temp->right);
//            }
// }

 void leftBoundary(Node* root){
    if (root == NULL || (root->left == NULL && root-> right == NULL)) return;
    cout<< root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL) leftBoundary(root->right);
 }
 void leafNodes(Node* root){
    if(root ==  NULL) return ;
    if(root->left == NULL && root-> right == NULL){
        cout<<root->val<<" ";
        return;
    }
    leafNodes(root->left);
    leafNodes(root->right);
 }
 void rightBoundary(Node* root){
      if(root == NULL || (root->left == NULL && root-> right == NULL)) return;
      rightBoundary(root->right);
      if(root->right == NULL)rightBoundary(root->left);
      cout<<root->val<<" ";
      
 }

 void TotalBoundary(Node* root ){
    leftBoundary(root);
    leafNodes(root);
    rightBoundary(root->right);
 }
int main(){
  int arr[]={1,2,3,4,5,0,6,7,0,8,0,9,10,0,11,0,12,0,13,0,14,15,16,0,17,0,0,18,0,19,0,0,0,20,21,22,23,0,24,25,26,27,0,0,28,0,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  Node* root = construct(arr,n);
//   levelorder(root);
     TotalBoundary(root);
}