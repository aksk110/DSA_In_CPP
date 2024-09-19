#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="raghav is a maths teacher";
    stringstream name(str);
    string temp;
    vector<string>v;
    while(name>>temp){ // name se input lelo    
         v.push_back(temp);
        }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
       if(v[i]==v[i-1]) count++; 
       else count =1;
       maxcount=max(maxcount,count);
    }
    cout<<endl;

    cout<<maxcount;
}