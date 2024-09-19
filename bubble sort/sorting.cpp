#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    // using library of sorting  
int main(){
    vector<int>v;
    int x;
    for(int i=0;i<5;i++){
       cin>>x;
       v.push_back(x);
    }
    sort(v.begin(),v.end());
  
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    
}