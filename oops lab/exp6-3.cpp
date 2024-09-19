#include<iostream>
using namespace std;
void handling(int arr[],int i,int n){
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
        throw runtime_error("again");
    }

}
int main(){
    int i,n;
    int arr[]={1 ,3, 5, 7, 8};
    cout<<" enter the value of index";
    cin>>i;
    n=sizeof(arr)/sizeof(arr[0]);
    try{
        handling(arr,i,n);
        
    }
    catch(const exception &e){
        cout<<" again error :"<<e.what()<<endl;
    }
}