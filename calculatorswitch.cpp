#include<iostream>
using namespace std;
int main(){ 
    float a,b;
    int x;
    cout<<"enter the first number ";
    cin>>a;
    cout<<"enter the second number ";
    cin>>b;
    cout<<"enter the operation ";
    cin>>x;
    switch(x)
    {
        case 1:cout<<"addition is "<<a+b;
        break;
        case 2:cout<<"substraction is "<<a-b;
        break;
        case 3: cout<<"multiplication is "<<a*b;
        break;
        case 4:cout<<"division is "<<a/b;
        break;
        default : x;


    } 
    

}
