#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); // 0
    st.push(20); // 1
    st.push(30); // 2
    st.push(40);  // ..
    st.push(50);

    // push element in bottom;

    // stack<int> temp;
    // while(st.size() > 0){
    //     temp.push(st.top());
    //     st.pop();
    // }
    // // added the new element in bottom 50;
    // temp.push(50);
    // while(temp.size() > 0){
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // // printing the element in stack 
    // while(st.size() > 0){
    //     cout<<st.top()<<"  ";
    //     st.pop();
    // }

   // push element in at give in given index idx;
   stack< int> temp;
   int idx=2; // element 100;
   while(st.size() > idx){
        temp.push(st.top());
        st.pop();
   }
   st.push(100);
   while(temp.size() > 0){
    st.push(temp.top());
    temp.pop();
   }
    // printing the element in stack 
    while(st.size() > 0){
        cout<<st.top()<<"  ";
        st.pop();
    }

}
