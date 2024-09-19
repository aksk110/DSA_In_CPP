#include<iostream>
using namespace std;
void gun(){
   
    cout<<"hello"<<endl;
    return;//matlab function khatam
}
void fun(int n){
    if(n==0) return;
    cout<<"hii"<<endl;
    // fun(n-1);// function calling itself 
    gun();
    fun(n-1);// function calling itself
     }

int main(){
    int n=2;
    fun(n);

}