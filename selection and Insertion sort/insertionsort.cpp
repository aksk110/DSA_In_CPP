#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n=5,x;
   vector<int>v;
   for(int i=0;i<n;i++){
      cin>>x;
      v.push_back(x);  
   }

//    INSERTION SORT
for(int i=1;i<n;i++){
    int j=i;
    // while(j>=1){
    //     if(v[j]>=v[j-1]) break;
        
    //     if (v[j]<v[j-1]){
    //         swap(v[j],v[j-1]);
    //         j--;
    //     }
    // } // same code  important 
    while(j>=1&& v[i]<v[j-1]){
        swap(v[j],v[j-1]);
        j--;
    }

}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
}    