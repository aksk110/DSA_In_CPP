#include<iostream>
using namespace std;
// bubble sorting 
int main(){
    int arr[]={5,0,3,0,2,0};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0;i<n-1;i++){
       
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                // swap
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
        } 
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}