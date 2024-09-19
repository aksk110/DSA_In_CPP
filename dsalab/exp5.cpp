
#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
int Calci(char ch ,int a,int b){
    if(ch=='*') return b * a;
    else if(ch=='+') return b+a;
    else if(ch=='-') return b-a;
    else if( ch== '/') return b/a;
    else return pow(b,a);
}
int Postfix(string s){
    stack<int> val;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(ch >= 48 && ch <=57) val.push(s[i]-'0'); 
        else{
            int A=val.top();
            val.pop();
            int B=val.top();
            val.pop();  
            val.push(Calci(s[i],A,B)); 
        }
    }
    return val.top();
}
int main(){
  string s;
  cout<<" enter the postfix equation : ";
  cin>>s;
  if(s[0] < 48 || s[0] > 57 )  {
    cout<<" THIS IS PREFIX NOTATION  SORRY : ";
    return 0; 
  }
  if(s[1] < 48 || s[1] > 57) {
    cout<<" THIS IS INFIX NOTATION  SORRY : ";
    return 0; 
  }
  cout<<" Answer is :";
  cout<<Postfix(s);
}
