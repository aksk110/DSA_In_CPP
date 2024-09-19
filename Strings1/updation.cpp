#include<iostream>
using namespace std;
int main(){
    // string name = "aks";
    // cout<<name;
    // cout<<endl;
    // name[2]='k';
    // cout<<name; // in c++ string are mutable but in java not
     string name="akskumarsinghpatel";
   
     cout<<name;
       cout<<endl;
     int i=0;
     while(name[i]!='\0'){
        if(i%2==0){
            name[i]='a';
        }
        i++;
     }
     cout<<name;
}
