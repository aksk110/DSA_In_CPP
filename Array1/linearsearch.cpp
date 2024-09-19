#include<iostream>
using namespace std;
int main(){
    int x=7,n;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     bool flag =false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag = true;
            
            
        }
       
    }
    if(flag==true)cout<<"present";
    else cout<<404;
}