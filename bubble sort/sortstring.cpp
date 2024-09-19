#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    // using library of sorting  
int main(){
    vector<string>v;
    string str={"AXZYDGSVXYZVEZVXUZGSZHXVD"};
    for(int i=0;i<str.size();i++){
        if(str[i]>='X'){
            v.push_back(string(1,str[i]));// it convert string to char
        }
        
    }
    sort(v.begin(),v.end());
  
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}