#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){

     int n;
     cout<<" Enter the size of an array ";
     cin>>n;
     cout<<" Enter the elements :"<<endl;
     vector<int> arr(n);
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
        stack<int> st;
        vector<int> nsi(n) ;//  next smaller index array;
        nsi[n-1]=n;
        st.push(n-1);
        for(int i= n-2;i>=0;i--){
            while(st.size() != 0 && arr[i]< arr[st.top()]){
                st.pop();
            }
            if(st.size()==0) nsi[i]=n;
            else{
                nsi[i]=st.top();
            }
            st.push(i);
        }

        // previous smaller index array;
        stack<int> gt;
        vector<int> psi(n);
        psi[0]=-1;
        gt.push(0);
        for(int i=1;i<n ;i++){
             while( gt.size() != 0 && arr[i]< arr[ gt.top()]){
                 gt.pop();
            }
            if( gt.size()==0) psi[i]=-1;
            else{
                psi[i]= gt.top();
            }
             gt.push(i);
        }
        for(int i=0;i<n;i++){
            cout<<nsi[i]<<"  ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<psi[i]<<"  ";
        }
}
