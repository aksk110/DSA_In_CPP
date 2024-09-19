#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> slidingMaxm(vector<int>&arr,int k){
    if (k==1) return arr;
    vector<int> ans;
    deque<int> dq;
    for(int i=0;i<arr.size();i++){
       while (dq.size() > 0 && arr[dq.back()] <= arr[i]) dq.pop_back();
       dq.push_back(i);
       if(i>=k-1) ans.push_back(arr[dq.front()]);
    }
    return ans;
}

int main(){
    int n;
    cout<<" Enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<" Enter the elements : ";
    for(int i=0 ;i<n ;i++){
        cin>>arr[i];
    }
    int k;
    cout<<" Enter the window size : ";
    cin>>k;
    vector<int> v =slidingMaxm(arr,k);
    for(int i=0;i< v.size();i++){
        cout<<v[i]<<"  ";
    }
}
