#include<iostream>
using namespace std;
int main(){
    int x,n;
    cout<<"enter the number which table print  ";
    cin>>x;
    cout<<"enter the times which print table ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"\n "<<x<<"*"<<i<<"="<<x*i;
    } 
    return 0;

}