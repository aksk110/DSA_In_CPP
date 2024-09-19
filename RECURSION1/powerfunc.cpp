#include<iostream>
using namespace std;
int Square(int a,int b){
    if(b==0)return 1;
    return a*Square(a,b-1);
}
int  main(){
   cout<<Square(2,10)<<endl;
}