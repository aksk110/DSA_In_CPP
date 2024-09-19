#include<iostream>
#include<vector>
using namespace std;
void change2dvector(vector<vector<int>> &v){
    v[0][0]=3;
}
int main(){
    vector<vector<int>>x;
    vector<int>v1;
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(2);
    v2.push_back(1);
    x.push_back(v1);
    x.push_back(v2);
    for(int i=0;i<x.size();i++){
    for(int j=0;j<x[0].size();j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
   }


   change2dvector(x);
   cout<<x[0][0];
   cout<<endl;
   for(int i=0;i<x.size();i++){
    for(int j=0;j<x[0].size();j++){
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
   }


    
}