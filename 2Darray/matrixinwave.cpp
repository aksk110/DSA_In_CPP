#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<a[i][j]<<" ";
            }
            else{
                    cout<<a[i][n-1-j]<<" ";
                    
                }
            }
            cout<<endl;
        }
    }
