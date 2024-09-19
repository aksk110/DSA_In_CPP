#include<iostream>
#include<string>
using namespace std;
void subsets(string ans,string orginal){
    if(orginal == ""){
        cout<<ans<<"  "<<endl;
        return;
    }
    char ch=orginal[0];
    subsets(ans + ch,orginal.substr(1));
    subsets(ans,orginal.substr(1));
}
int main(){
    string str="abc";
    string s="";
    subsets(s,str);
    return 0;
}

