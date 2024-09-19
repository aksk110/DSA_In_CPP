#include<iostream>
using namespace std;
typedef int hour;
int main(){

    hour x;
    cout<<"enter the hour\n";
    cin>>x;
    if (x>=9 && x<=18){
        cout<<"it is a working hour ";
    }
    else if(x>24){
        cout<<"enter correct hour ";
    }
    else {
        cout<<"it is a free time";
    }
    return 0;
}