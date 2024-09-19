#include<iostream>
using namespace std;
int main(){

    int x,n;
    cout<<"enter the number which print table";
    cin>>x;
    cout<<"enter the times which print ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<x*i<<endl;
    }
    return 0;
}