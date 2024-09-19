#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0){
    int ans=pow(x,n/2);
    return ans*ans;
    }
    else{
        int ans=pow(x,n/2);
        return x*ans*ans;
    }
    
}
int main(){
   cout<<pow(2,10)<<endl;
}