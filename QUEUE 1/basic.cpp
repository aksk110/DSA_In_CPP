    // the function are in 
       // pop() remove from front 
       // push  push from rear 
       // front -> top;
       // front the item shown from front phele wala 
       // iska sedha matlab hai jo phele aao phele paao;
#include<iostream>
#include<queue>
using namespace std;
int main(){
       queue<int> q;
       q.push(10);
       q.push(20);
       q.push(30);
       q.push(40);
       q.push(50);
       
      // access the last element ;
      cout<<q.back(); 

    while(q.size() > 0){
        cout<<q.front()<<"  ";
        q.pop();
    }
}