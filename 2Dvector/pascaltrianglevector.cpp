#include<iostream>
#include<vector>
using namespace std;
// int fact(int n){
//    int  fact=1;
//     if(n==0||n==1){
//         fact=1;
//     }
//     else{
//         for(int i=1;i<=n;i++){
//             fact*=i;
//         }
//     }
//     return fact;

    
// }
int main(){
    int n;
    cout<<"enter the size of pascal ";
    cin>>n;
    vector<vector<int>>v;
    for(int i=1;i<=n;i++){
        vector<int>a(i);
        v.push_back(a);
        }
       
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            // v[i][j]=fact(i)/(fact(i-j)*fact(j));
          if(j==0||j==i){
            v[i][j]=1;
          }  
           else v[i][j]=v[i-1][j]+v[i-1][j-1];
        }

    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }
            
}
