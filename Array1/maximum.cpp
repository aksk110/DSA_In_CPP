// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of an array";
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int max=arr[0];
//     for(int i=1;i<n;i++){
//         if (max<arr[i]) max=arr[i];
//     }
//     cout<<"max is"<<max;
// }
       
#include<iostream>
using namespace std;
int main(){
    int n,INT_MIN;
    cout<<"enter the size of an array";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (max<arr[i]) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]!=max&& smax<arr[i])
        smax=arr[i];
    }
    cout<<"max is"<<max;
}
             