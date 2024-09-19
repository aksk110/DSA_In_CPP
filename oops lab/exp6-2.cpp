#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// using generic or template function 
template < typename T>

T  Maxm (  vector <T> & arr){
   
   T MAX = arr[0];
    for(int i= 0;i<arr.size();i++){
        if(arr[i] > MAX)  MAX =arr[i];
    }
    return MAX;
}
int main(){
    int n;
    cout<<" enter the size of  an array :";
    cin>>n;
    vector<int> arr(n);
     
    for(int i=0;i< n ;i++){
        cin>>arr[i];
    }
    cout<<Maxm(arr)<<endl;
}