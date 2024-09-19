#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutation(string ans,string orginal){
    if(orginal==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<orginal.size();i++){
        char ch=orginal[i];
        permutation(ans+ch,orginal.substr(0,i)+orginal.substr(i+1));
    }
   
}
int main(){
    string str="abcd";
    permutation("",str);
    
}