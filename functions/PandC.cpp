#include<iostream>
using namespace std;
float  fact(int x){
    int fact=1;
    int i=1;
    while( i<=x){
        fact*=i;
        i++;
    }
    
    return fact;}
    int main(){
    //     int n,r;
    //     cout<<"enter n and r";
    //     cin>>n>>r;
    //     float comb;
    //     comb=(fact(n))/(fact(r)*fact(n-r));
       
    //  cout<<comb;

    int n,r,perm;
    cout<<"enter the n and r";
    cin>>n>>r;
    perm=fact(n)/fact(r);
    cout<<perm;



      


    }