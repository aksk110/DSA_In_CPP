#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,3,2,0};
    int n=7;
    int hi=n-2;
    int lo=1;
    int loc=-1;
    int x;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(n<3) break;
        else if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            x=arr[mid];
            loc=mid;
            break;
        }
        else if(arr[mid]<arr[mid-1]){
            hi=mid-1;
        }
        else lo=mid+1;
    
}
cout<<x<<" "<<loc;
}

