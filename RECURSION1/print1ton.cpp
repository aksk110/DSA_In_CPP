#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n)return; // extra perimeter ;
    cout<<i<<endl;
    print(i+1,n+i);
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    print(1,n);
}
