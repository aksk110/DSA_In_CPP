#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    } 
    int count=0;   
    while (minr<=maxr&&minc<=maxc){
     for(int i=minc;i<=maxc&&count<tne;i++){
        cout<<arr[minr][i]<<" ";
      count++;
     }
     
     minr++;
     for(int i=minr;i<=maxr&&count<<tne;i++){
        cout<<arr[i][maxc]<<" ";
        count++;
     }
     
     maxc--;
     for(int i=maxc;i>=minc&&count<tne;i--){
        cout<<arr[maxr][i]<<" ";
        count++;
     }
     
     maxr--;
     for(int i=maxr;i>=minr&&count<<tne;i--){
        cout<<arr[i][minc]<<" ";
       count++;
     }
     minc++;
     }

}