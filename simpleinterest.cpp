#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"enter the principle amount,rate,time ";
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<"the simple amount "<<si;
    return 0;
}