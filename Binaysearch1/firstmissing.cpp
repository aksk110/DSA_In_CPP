#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(v[i]+1==v[i+1]){
            count=v[i+1];
            flag=true;
        }
        else
            break;
        
    }
    if(flag==true){
        cout<<" the missing first is "<<count+1;
    }
    else cout<<" the first missing is "<<count;
   
}    