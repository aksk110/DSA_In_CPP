#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8}; // n should b eeven 
    int n=sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    stack<int>st;
    for(int i=0;i< n;i++){
        q.push(arr[i]);
    }
    // adaa push karo stack me
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // again push element in q by satack
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
    } // queue to queue 
    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    } //queue to stack 
     for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    } // final 
    for(int i=0;i<n/2;i++){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<q.front()<<"  ";
        q.push(q.front());
        q.pop();
    }
}