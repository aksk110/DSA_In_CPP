#include<iostream>
#include<string>
using namespace std;
void subsets(string ans,string orginal,bool flag){
    if(orginal == ""){
        cout<<ans<<"  "<<endl;
        return;
    }
    char ch=orginal[0];
    if(orginal.size()==1){
         if(flag==true) subsets(ans + ch,orginal.substr(1),true);
         subsets(ans,orginal.substr(1),true);
         return;
    }
    char dh=orginal[1];
    if(ch==dh){
    if(flag==true) subsets(ans + ch,orginal.substr(1),true);
    subsets(ans,orginal.substr(1),false);
    }
    else{
        if(flag==true) subsets(ans + ch,orginal.substr(1),true);
         subsets(ans,orginal.substr(1),true);
    }
    }

int main(){
    string str="aac";
    string s="";
    subsets(s,str,true);
    return 0;
}

