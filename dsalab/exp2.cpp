#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter the size of an array ";
cin>>n;
float arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//bubble sort 

for(int i=0;i<n;i++){
    int flag=1;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            float temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            flag=0;
        }
    }
    if(flag == 1){
        if(i == 0){
           cout<<"the array is already sorted" << endl;
           break; 
        }
        else{
            cout << "array is not sorted " << endl;
            break;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}