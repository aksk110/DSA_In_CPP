// #include<iostream>
// #include<climits>
// using namespace std;
// void printMax(int arr[],int n,int idx,int max ){
//     if(idx==n){
//         cout<<max;
//         return;}
//      if(max<arr[idx]) max=arr[idx];
//      printMax(arr,n,idx+1,max);
// }
// int main(){
//     int arr[]={2,5,48,2,3,5,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     printMax(arr,n,0,INT_MIN);  
// }

#include<iostream>
using namespace std;
int maxofarray(int arr[],int n,int idx){
    if(idx==n-1) return arr[idx];
    if(arr[idx]>arr[idx+1]){
        // swap
        int temp=arr[idx+1];
        arr[idx+1]=arr[idx];
        arr[idx]=temp;
    }
    maxofarray(arr,n,idx+1);
    return arr[n-1];

}
int main(){
    int arr[]={2,5,3,7,8,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxofarray(arr,n,0)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}