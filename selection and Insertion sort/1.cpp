#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    vector<int>v(5,0);
    int n=5;
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    mindex=j;
                }
            }
        }
        arr[mindex]=i;
        v[mindex]=1;
        // x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    }

   