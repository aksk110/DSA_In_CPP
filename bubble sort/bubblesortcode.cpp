#include<iostream>
using namespace std;
// bubble sorting 
int main(){
    int arr[]={1,6,3,9,0,5};
    int n=6;
    
    for(int i=0;i<n-1;i++){
       bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // swap
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                flag=false;
            }
        } 
        if(flag == true ){
           if(i==0){
            cout<<"array is already sorted"<<endl;
            break;
           }
           else {cout<<" not sorted"<<endl;
           break;
           }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}