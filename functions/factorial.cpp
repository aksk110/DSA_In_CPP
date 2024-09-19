#include<iostream>
using namespace std;
int  fact(int x){
    int fact=1;
    int i=1;
    while( i<=x){
        fact*=i;
        i++;
    }
    
    return fact;
   
}
int main(){
    cout<<fact(2);
}