// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,-2,3,-4,-5,6,8};
//     for(int i=0;i<7-1;i++){
//         for(int j=0;j<7-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// binaary search 

#include<iostream>
using namespace std;
int main(){

    int arr[]={-5,-4,-2,1,3,6,8};
    int mid;
    int x=-4;
    int beg=1;
    int end=7; // end index
    for(int i=0;i<6;i++){
        mid=(beg+end)/2;
        if(arr[mid]==x) 
        cout<<mid;
        break;
        if(arr[mid]>x){
            beg=beg;
            end=mid-1;
            
        }
        if(arr[mid]<x){
            end=end;
            beg=mid+1;

        }
    }

}