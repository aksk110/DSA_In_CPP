#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,3,2,4,4,7,1,5};
    vector<int>v(8,0);
    
    for(int i=0;i<8;i++){
        v[arr[i]]++;
        }
    int x=0;
    int times=0;
    for(int i=0;i<8;i++){
        if(v[i]>x){
            x=i;
            times=v[i];
        }
        else x=x;
     }
     cout<<x<<" "<<times;
}