#include<iostream>
#include<stack>
using namespace std;
void display(stack<char> &st){
    stack<char>temp;
    while(st.size()>0){
        cout<<st.top()<<"  ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while (temp.size() > 0){
        cout<<temp.top()<<"  ";
        st.push(temp.top());
        temp.pop();
    }
}
void removeDuplicates(stack<char> &st , string &s){
    st.push(s[0]);
    for(int i=0;i<s.size();i++){
        if(s[i] == st.top()) continue;
        else{
            st.push(s[i]);
        }
    }
    s = "";
    while(st.size() > 0){
        s=s+st.top();
        st.pop();
    }
}
int main(){
    stack<char> st;
    string s="aaabbcddaabffg";
    removeDuplicates(st,s);
   
    cout<<s;
 

}