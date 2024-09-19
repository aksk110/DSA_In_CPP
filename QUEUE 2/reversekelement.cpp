// Reverse first k elements in queue;
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseK(queue<int> & q , int k){
      stack <int> st;
      for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
      }
      while(st.size() > 0){
        q.push(st.top());
        st.pop();
      }
      int n=q.size();
      for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
      }
}
void display(queue<int> &q){
    for(int i=0;i<q.size();i++){
        int x=q.front();
        cout<<x<<"  ";
        q.pop();
        q.push(x);

    }
    cout<<endl;
}
int main(){
    int k;
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<" enter the number k : ";
    cin>>k;
    reverseK(q,k);
    display(q);
}
