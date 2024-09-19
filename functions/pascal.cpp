#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    int i=1;
    while(i<=x){
       f=f*i;
       i++;
    }
    return f;

}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int a;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            a=(fact(i))/(fact(j)*fact(i-j));
            cout<<a<<" ";
          
        }
        cout<<endl;
    }
    
}
