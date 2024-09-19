#include<iostream>
#include<cmath>
using namespace std;
bool isps(int n){
    int root=sqrt(n);
    if(root*root==n){
        return true;
    }
    else return false;
}
bool flag=false;
int main(){
    int c;
    cout<<"enter the number ";
    cin>>c;
    int x=0;
    int y=c;
    while(x<=y){
    if(isps(x)&&isps(y)){
        flag=true;
         break;
    }
    else if(!isps(y)){
        y=(int)sqrt(y)*(int)sqrt(y);
        x=c-y;
    }
    else {
       x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
       y=c-x;}
    }
    if(flag==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;

   
   
   
}