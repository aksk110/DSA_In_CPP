#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack <int> st;
    stack <int> temp;
    stack <int> rev;

    st.push(11);
    st.push(18);
    st.push(10);
    st.push(9);

     vector <int> v(st.size());
     int i=0;
    // printing the elements in stacks hota hai apka bhai 
   while(st.size() > 0){
        cout<<st.top()<<" ";
        v[i] = st.top(); // yaha pr apka store ho rhi hai value in vector me 
        temp.push(st.top());
        st.pop();
        i++;
    }
    cout<<endl;
    cout<<st.size()<<endl;
    // ulta print krne ke liye hota hai ye apka bhai ...
    for(int i=v.size();i>0;i--){
        st.push(v[i]);
    }
    cout<<endl;
    cout<<st.size()<<endl;
    cout<<temp.size()<<endl;
    while(temp.size() > 0){
        rev.push(temp.top());
        temp.pop();
    }
    while(rev.size() > 0){
        cout<< rev.top()<< " ";
        rev.pop();
    }
}