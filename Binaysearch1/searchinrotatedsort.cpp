#include<iostream>
using namespace std;

int main(){
    int arr[]={6,8,20,28,33,1,3,4,5};
    int n=9;
    int lo=0,hi=n-1;
    int mid;
    int target=20;
    int pivot;
    // finding pivot 
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
            pivot=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid]+1){
            pivot=mid+1;
            break;
        }
        else if(arr[mid]>arr[hi]){
            lo=mid+1;
        }
        else hi=mid-1;
    }
    if (target>=arr[0]&&target<=arr[pivot-1]){
         int lo=0;
         int hi=pivot-1;
        while(lo<=hi){
           int  mid=(lo+hi)/2;
            if(arr[mid]==target) {cout<<mid<<endl; break;}
            else if(arr[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        
    }
    else { int lo=pivot;
         int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==target) {cout<<mid<<endl; break;}
            else if(arr[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
    }
    cout<<pivot<<endl;
    
}