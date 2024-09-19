#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,d,r1,r2;
    cout<<"enter the quadratic equation in form of ax2+bx+c";
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    cout<<"\nthe root are "<<r1;
    cout<<"\nthe root are "<<r2;

    if(d>0){
        cout<<"\nroots are the real and distinct";}
    else if (d==0){
        cout<<"\nroots are real and equal";
        }
    else{
        cout<<"\nroots are complex";
    } 
    return 0;  

}
