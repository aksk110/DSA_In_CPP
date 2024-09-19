#include<iostream>
using namespace std;

int main(){
    int i;
    int arr[]={1,2,3,4,5,6,7,};
     int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" enter the index : ";
    cin>>i;
    try{
        if(i >= n || i<0){
            throw runtime_error("out of range :");
        }
       else {
        cout<<arr[i]<<endl;
       }
    }
    catch( const exception &e){
        cout<<"ERROR :  "<<e.what()<<endl;
       
    }
    
}