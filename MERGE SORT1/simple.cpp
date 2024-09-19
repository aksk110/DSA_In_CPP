#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> & u,vector<int>&v,vector<int>&res){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size()  && j< v.size()){
        if(u[i]<=v[j]){
            res[k]=u[i];
            i++;
            k++;
        }
        else{
            res[k]=v[j];
            j++;
            k++;
        }
    }
    if(i=u.size()){
        while(j<v.size()){
            res[k]=v[j];
            k++;
            j++;
        }
    }
    else {
        while(i<u.size()){
        res[k]=u[i];
        i++;
        k++;
        }
    }
}
int main(){
    vector<int>u(5);
    vector<int>v(6);
    vector<int>res(11);
    for(int i=0;i<u.size();i++){
        cin>>u[i];
    }
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    merge(u,v,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"  ";
    }
    
}    