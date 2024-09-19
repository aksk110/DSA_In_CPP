#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<" Enter the size of array ";
    cin>>n;
    vector<int> arr(n);
    vector<int> ans(n);
    cout<<" Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // next greater jaisa krna hai apko \addindex
    stack <int> st;
    // ans[n-1]=-1;
    // st.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        while(st.size() != 0 && arr[i] < st.top()){
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
  for(int i=0;i<n;i++){
    cout<<ans[i]<<"  ";
  }

    
}
