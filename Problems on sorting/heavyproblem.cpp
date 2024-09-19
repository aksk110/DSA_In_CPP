// range nikalni hai apki  


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float maximum(float a,float b){
    if(a>=b) return a;
    else b;
}
float minimum(float a,float b){
    if(a<=b) return a;
    else b;
}
int main(){
    int arr[]={5,3,10,3};
    int n=4;
    float kmin=(float)INT_MIN;
    float kmax=(float)INT_MAX;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
          
             kmin=maximum(kmin,((arr[i]+arr[i+1])/2.0));
        }
        if(arr[i]<=arr[i+1]){
           
             kmax=minimum(kmax,((arr[i]+arr[i+1])/2.0));
        
    }
    }
    if(kmin>kmax){
        cout<<"-1"<<endl;
    }
    else cout<<kmin<<" "<<kmax<<endl;

}