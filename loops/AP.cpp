#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n terms number  ";
    cin>>n;
    //ap 1,3,5,.....
    for(int i=1;i<= 2*n-1;i+=2){
        cout<<i<<endl;
    }
     return 0;
}