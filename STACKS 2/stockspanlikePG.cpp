#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<" Enter the Number of stock: ";
    cin>>n;
    cout<<" enter the stock :"<<endl;
    vector<int> stk(n);
     for(int i=0 ;i<n;i++){
        cin>>stk[i];
     }
    vector<int> ans(n);
    stack<int> st;
    stack< int> temp;
    ans[0]=1;
    // st.push(stk[0]);

    for(int i=1; i<n ; i++){
        int count = 1 ;
       while(st.size() != 0 && stk[i] > st.top() ){
            count++;
            temp.push(st.top());
            st.pop();
       }
       ans[i]=count;
       while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
       }
       st.push(stk[i]);
    }
    
    for(int i=0 ;i<n;i++ ){
        cout<<ans[i]<<" ";
    }
}
