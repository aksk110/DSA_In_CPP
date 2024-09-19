#include<iostream>
#include<queue>
using namespace std;
void removeEvenIdx(queue<int> &q){
    int i=0;
    queue <int> temp;
    while(q.size() > 0){
        if(i%2 ==0) q.pop();
        else{
            temp.push(q.front());
            q.pop();
        }
        i++;
    }
    while(temp.size() > 0){
        q.push(temp.front());
        temp.pop();
    }
}
void display(queue<int> &q){
  queue<int>temp;
  while(q.size() > 0){
    cout<<q.front()<<" ";
    temp.push(q.front());
    q.pop();
  }
  while(temp.size() > 0){
    q.push(temp.front());
    temp.pop();
  }
  cout<<endl;
}
 // it is also in O(n);
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    removeEvenIdx(q);
    display(q);
    q.push(50);
    
}