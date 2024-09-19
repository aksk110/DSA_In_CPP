#include<iostream>
using namespace std;
int stair_path(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair_path(n-1)+stair_path(n-2);
}
int main(){
    cout<<stair_path(6)<<endl;
}