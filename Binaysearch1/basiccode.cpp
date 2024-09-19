#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// binary search code
int main(){
    int n,target;
    cout<<"enter the size of vector";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     cout<<"enter the target";
    cin>>target;
    sort(v.begin(),v.end());
    int lo=0;
    int hi=n-1;
    int loc=-1;
    while(hi>=lo){
        int mid=(lo+hi)/2;
        if(v[mid]==target){
        loc=mid;
            break;
        }
        else if(v[mid]>target){
            hi=mid-1;
        }
        else {lo=mid+1;}
    }
    if(loc!=-1){
        cout<<" the location of target "<<loc<<endl;
    }
    else{
        cout<<"target not found";
    }
    
    
}