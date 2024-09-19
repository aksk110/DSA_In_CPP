#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter the first,second and third number ";
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"x is greatest";
    }
    else{
        if(y>z){
            cout<<"y is greatest";
        }
        else{
            cout<<"z is greatest ";
        }
    }
    return 0;
}