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
    int x,y;
    while(hi>=lo){
        int mid=(hi+lo)/2;
        if(v[mid]==target){
             x=mid;
            while(v[mid]==v[mid-1]){
                mid--;
            }
            loc=mid;
            while(v[x]==v[x+1]){
                x++;
            }
            y=x;
            break;
        }
        else if(v[mid]>target){
            hi=mid-1;
        }
        else lo=mid+1;
    }
    if(loc!=-1){
        cout<<"the first occurenceof the target "<<loc<<endl;
        cout<<"the last occurenceof the target "<<y<<endl;
    }
    else cout<<"the target not found ";
}    