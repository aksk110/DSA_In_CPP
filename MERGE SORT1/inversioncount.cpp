#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
       for( int j=i+1;j<n;j++){
        if(i<j && v[i]>v[j]){
            cout<<"("<<v[i]<<","<<v[j]<<")"<<endl; 
        }
       }
    }
    
}

