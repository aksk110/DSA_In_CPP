#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    ofstream f1;
    f1.open("arr.txt");
    f1<<" the orginal data "<<endl;
    for(int i=0;i<v.size();i++){
        f1<<v[i]<<" ";
    }
    f1<<endl;
    f1<<" the sorted data"<<endl;
    
     
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        f1<<v[i]<<" ";
    }
    f1.close();

   
}