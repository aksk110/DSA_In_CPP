// #include<iostream>
// using namespace std;
// void Sum(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;}
//     Sum(sum+n,n-1);

// }
// int main(){
//    Sum(0,100);
// }

// return type sum
#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0) return 0;
    return n+Sum(n-1); // like factorial.
}
int main(){
    cout<<Sum(100);
}