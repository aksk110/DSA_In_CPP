#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
       v.push_back(x);
    }
    int max =stoi(v[0]);
    for(int i=1;i<n;i++){
        int x=stoi(v[i]);
        if(x>max) max=x; 
    }
    cout<<max;
}