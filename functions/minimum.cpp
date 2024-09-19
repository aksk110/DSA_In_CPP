#include<iostream>
using namespace std;
int minimum(int x,int y){
    int a;
    if (x>y) a=y;
    else a=x;
    return a;

}
int main(){
    int m,n;
    cout<<"enter the number ";
    cin>>m>>n;
    cout<<minimum(m,n);


}