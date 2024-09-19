#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<" Enter the size of an array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    // previous greater  aage se chalan ahota ha
    stack <int> st;
    vector<int> ans(n,-1);
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size() > 0 && arr[i] >= st.top()){
            st.pop();
        }
        if(st.size()==0){
            ans[i]=-1;
        }
        else {
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }


for(int i =0; i<n ;i++ ){
    cout<<ans[i]<<"  ";
}

}