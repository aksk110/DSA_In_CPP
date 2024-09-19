#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
// void reversebystack(queue<int> &q){
//     stack<int> st;
//     while(q.size() > 0){
//         st.push(q.front());
//         q.pop();
//     }
//      while(st.size() > 0){
//         q.push(st.top());
//         st.pop();
//     }
// }
void reversebyvector(queue<int> &q){
    vector<int> v;
    while(q.size() > 0){
        v.push_back(q.front());
        q.pop();
    }
    int i=v.size()-1;
    while(i >= 0){
        q.push(v[i]);
        i--;
    }
}
void display(queue<int> &q){
    while(q.size() > 0){
    cout<<q.front()<<"  ";
    q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // reversebystack(q);
    reversebyvector(q);
    display(q);

}
