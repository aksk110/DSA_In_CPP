#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch == '*' || ch == '/') return 2;
    if(ch=='+' || ch =='-') return 1;
}
int value(char ch,int A,int B){
    if(ch=='*') return A*B;
    else if(ch=='/') return A/B;
    else if(ch=='+') return A+B;
    else return A-B;
}

int  Infix(string s){
    stack<int> val;
    stack<char> op; // operaator 
    for(int i=0;i<s.size();i++){
       if(s[i]>=48 && s[i]<=57){ // enter the value in stack push
          val.push(s[i]-48);
       }
       else{
          if(op.size() == 0 || priority(op.top()) < priority(s[i])) op.push(s[i]);
          else{
            while( op.size() > 0 && priority (s[i]) <= priority(op.top())){
                char ch = op.top();
                 op.pop();
                 int B=val.top();
                 val.pop();
                 int A=val.top();
                 val.pop();
                val.push(value(ch,A,B)); 
            }
            op.push(s[i]);
          }
       }
    }
   while(op.size() > 0){
      char ch = op.top();
      op.pop();
      int B=val.top();
      val.pop();
      int A=val.top();
      val.pop();
      val.push(value(ch,A,B));
   }
   return val.top();
}
int main(){
    string s="2+6*4/8-3";
    int x =Infix(s);
    cout<<x;
    
}