#include<iostream>
using namespace std;
void Print(int x){
    if(x==0) return ; // base case terminate kaha krnaa hai 
    cout<<x<<endl;
    Print(x-1);
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    Print(n);
}