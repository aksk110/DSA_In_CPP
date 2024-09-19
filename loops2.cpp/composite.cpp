#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"the number is composite ";
            break;
        }
        else{
            cout<<"it is a prime number ";
        } break;
        
        
        
    }
    if(n==2){
        cout<<"it is prime number ";
    }
    
    return 0;
}