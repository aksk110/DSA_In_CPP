#include<iostream>
using namespace std;
int main(){
    int n, a=1,b=1;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
    int x=n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    if(x==1){
        cout<<1;
    }
    else {cout<<"fibonacci numaber is "<<sum;}
    

}