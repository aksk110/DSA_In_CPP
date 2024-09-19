#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int c=0;
int inversion(vector<int>&a,vector<int>&b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
             count+= (a.size()-i);
             j++;
        }
        else i++;
        }
    return count;
}
vector<int> merge(vector<int> &u,vector<int>&v,vector<int>&res){
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
    if(i==u.size()){
        while(j<v.size()){
            res[k]=v[j];
            j++;
            k++;
        }
    }
    else {
        while(i<u.size()){
            res[k]=u[i];
            i++;
            k++;
        }
    }
    return res;

    
    
}
void mergeSort(vector<int>&v){
    int n =v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-(n/2);
    vector<int>a(n1);
    vector<int>b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
  int x=8;
  vector<int>v(x);
  for(int i=0;i<x;i++){
    cin>>v[i];
  }
  mergeSort(v);
  for(int i=0;i<x;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<c<<endl;

    
}



