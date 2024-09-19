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
     // selection  sort 

   int small=0;
   for(int i=0;i<n-1;i++){
    int min= INT_MAX;
    int mindx=-1;
     for(int j=i;j<n;j++){
        if(v[j]<min){
            min=v[j];
            mindx=j;
        }
        
     }
     swap(v[i],v[mindx]);


   }
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }

}
