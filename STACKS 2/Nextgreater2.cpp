#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<" enter the size of an array ";
    cin>>n;
    cout<<" enter the elements ";
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    stack<int>st;
    vector<int> ans(n,-1);
    ans[n-1]=-1;
    st.push(arr[n-1]);
     // next greater me aage se chalna hota hai apko  pop ,ans,push
    for(int i = n-2; i >=0 ; i--){
        while(st.size() > 0 &&  st.top() <= arr[i]){
            st.pop();
        }
        if(st.size() == 0){
            ans[i]=-1;
        }
        else {
            ans[i]=st.top();
        }
        st.push(arr[i]); 
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}


