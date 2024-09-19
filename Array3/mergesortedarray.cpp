#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1&&j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;

        }
        else
        res[k]=arr2[j];
        j++;
        k++; 
        }
        // for remaining element 
        if(i==n){
            while(j<=m-1)
            res[k]=arr2[j];
            k++;
            j++;
        
        }
        if(j==m){
            while(i<=n-1){
                res[k]=arr1[i];
                i++;
                k++;
            }
        }

   return res;
}
int main(){
    // int arr1[4]={1,4,5,8};
    vector<int>arr1;
    vector<int>arr2;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    // int arr2[6]={2,3,6,7,10,12};
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
    arr1.push_back(7);
    arr1.push_back(10);
    arr1.push_back(12);
    vector<int> v=merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
   
    
}