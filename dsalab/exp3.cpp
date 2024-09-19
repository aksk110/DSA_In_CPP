#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array";
    cin>>n;
    int item;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the item  ";
    cin>>item;
    // by built function 
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
    // binary search
    int lo=0;
    int hi=n-1;
    int mid;
    int loc=-1;
    bool flag=false;
    while(lo<=hi){
        mid=(hi+lo)/2;
        if(arr[mid]==item){
            loc=mid;
            flag=true;
            break;
        }
        else if(arr[mid]>item){
            loc=mid;
            hi =mid-1;
        }
        else lo=mid+1;     
    } 
    if(flag==true){
        while(mid<n-1){
            arr[mid]=arr[mid+1];
            mid++;
        }
        n--;
    }
    else{
        arr.resize(n+1);
        int i = n-1;
        while(i>=mid){
            arr[i+1]=arr[i];
            i--;       
        }
        arr[mid+1]=item;
        n++;

    }
    // dispalaying the vector
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"   ";
    }

}
