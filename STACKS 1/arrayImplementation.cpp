#include<iostream>
using namespace std;
class Stack{
public:
 
    int arr[5];
    int idx ;
        Stack( ){
            idx=-1;
        }

       void push(int val){
        if(idx == 5-1) {
            cout<<" your Stack is full"<<endl;
            return; 
        }
        
        else
        {idx++;
        arr[idx]=val;}
       }
       void pop(){
        if(idx == -1 ) {
            cout<<"your Stack is empty  "<<endl;
        return;    }
        idx--;
       }
       int top(){
        if(idx < 0) return 0;
        return arr[idx];
       }
       int size(){
        return idx+1; 
       }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(90);
    st.push(100);
    cout<<st.top()<<endl;
    cout<< st.size()<<endl;

}