#include<iostream>
#include<queue>
#include<vector>
#include<climits>
// #include<algorithm>
using namespace std;
int main(){
    int n,k;
    cout<<" Enter the size of an array : ";
    cin>>n;
    cout<<" Enter the size of window : ";
    cin>>k;
    vector<int> arr(n);
    vector<int> ans;
    cout<<" Enter the element : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    queue<int> q;
    for(int i = 0; i < n ;i++){
        if(arr[i] < 0) q.push(i);
    }
    for(int i=0; i < n-k+1; i++){
        while(q.size() > 0 && q.front() < i){
                q.pop();
        }
        if(q.size() ==0 || q.front() >= i+k) ans.push_back(0);
        else {
            ans.push_back(arr[q.front()]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
