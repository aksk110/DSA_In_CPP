#include<iostream>
#include<stack>
using namespace std;
void pushAtbottom(stack<int> &st,int val){
    stack <int> temp;
    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }

}
void reverse(stack<int> &st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);

}
void display(stack<int> &st){
    stack<int> temp;
    while(st.size() > 0){
        cout<<st.top()<<"  ";
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
   stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   reverse(st);
   display(st);
   cout<< st.size();
   
   


}