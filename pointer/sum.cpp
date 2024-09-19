#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int*p=&x;
    int*q=&y;
    cout<<*p+*q;
    
}