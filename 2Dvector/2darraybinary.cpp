#include<iostream>
#include<vector> // leetcode flipping matrix 861
using namespace std;
int main(){
    int m,n;
    cout<<"enter the row and coloumn";
    cin>>m>>n;
    vector<vector<int>>v;
    for(int i=0;i<m;i++){
        vector<int>v1(n);
        v.push_back(v1);

    }
    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }// flipping the rows 
    for(int i=0;i<m;i++){
        if(v[i][0]==0){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    v[i][j]=1;  
                }
                else{
                    v[i][j]=0;
                }
            }
        }
    }
    // flipping the coloumn 
    for(int j=0;j<n;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<m;i++){
            if(v[i][j]==0) noz++;
            else noo++;
         if(noz>noo){
            // flipping
            for(int i=0;i<m;i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }    
        }

    }
    int sum=0;
    int total=0;
    for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
            sum+=v[i][j]*x;
            x*=2;
        }
        
        
    }
    cout<<sum;
}