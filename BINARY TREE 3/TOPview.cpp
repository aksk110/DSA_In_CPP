#include<iostream>
#include<vector>
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
//  preorder ka use hoga concept
  void Topview(Node* root, vector<int> & top,int level){
    if(root ==  NULL) return;
    Topview(root->left,top,level - 1);
    Topview(root->right,top,level + 1);
  }
  void minHorlevel(Node* root,int & minlevel,int level){
    if (root == NULL) return ;
    minlevel=min(minlevel,level);
    minHorlevel(root->left,minlevel,level - 1);
    minHorlevel(root->right,minlevel,level + 1);
  }
  void maxHorlevel(Node* root,int &maxlevel,int level){
    if (root == NULL) return ;
    maxlevel=max(maxlevel,level);
    maxHorlevel(root->left,maxlevel,level - 1);
    maxHorlevel(root->right,maxlevel,level + 1);
  }
  void topview(Node* root, vector<int> & ans,int level){
    if(root ==  NULL) return;
    if(ans[level] == INT_MIN) ans[level]= root->val;
    topview(root->left,ans,level-1);
    topview(root->right,ans,level+1);
  }
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c=  new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

   
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    int minlevel = 0;
    int maxlevel = 0;
    minHorlevel(a,minlevel,0);
    maxHorlevel(a,maxlevel,0);

   int total = maxlevel - minlevel + 1;

   vector<int>ans(total,INT_MIN);
   topview(a,ans,-minlevel);
   for(int i=0 ;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }


   
 
  
    
}