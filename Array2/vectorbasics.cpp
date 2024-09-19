#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<6;i++){
        v.push_back(i);
    } 
    for(int i=0;i<6;i++){
        cout<<v[i]<<endl<<endl;
    }
    cout<<v.size();
}

