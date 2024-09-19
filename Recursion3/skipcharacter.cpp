#include<iostream>
#include<string>
using namespace std;
// void removeChar(string ans,string str){
//     if(str.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=str[0];;
//     if(ch=='a'||ch=='A') removeChar(ans,str.substr(1));
//     else removeChar(ans+ch,str.substr(1));
// }
void removeChar(string ans,string str,int idx){
    if(idx==str.size()){
        cout<<ans;
        return;
    }
    char ch=str[idx];;
    if(ch=='a'||ch=='A') removeChar(ans,str,idx+1);
    else removeChar(ans+ch,str,idx+1);
}

// int main(){
//     string str="Aks Kumar Singh Patel";
//     string s="";
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='a'|| str[i]=='A')
//             continue;
//         else s+=str[i];    
//     }
//     cout<<s;
// }

int main(){
    string str="Aks kumar singh patel";
    removeChar("",str,0);
}