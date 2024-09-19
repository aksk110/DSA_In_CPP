#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,0,1,0,2};
    int hi=5;
    int low=0;
    int mid=0;
    while(mid<=hi){
        if(arr[mid]==2){
            int temp=arr[hi];
            arr[hi]=arr[mid];
            arr[mid]=temp;
            hi--; 
            }
        else if(arr[mid]==0){
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            mid++;
            low++;
            }
        else mid++;
            

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}