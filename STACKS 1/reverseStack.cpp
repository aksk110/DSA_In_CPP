#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int> st;
    st.push(9);
    st.push(10);
    st.push(18);
    st.push(11);

    vector<int> v; // ek vector use krlo aap;
    while(st.size() > 0){
        v.push_back(st.top());
        st.pop();
    }

for(int i=0;i<v.size();i++){
    st.push(v[i]);
}
 
 while(st.size()>0){
    cout<<st.top()<<"  ";
    st.pop();
 }
}