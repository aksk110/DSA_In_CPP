// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(8);// like array 
//     for(int i=0;i<=7;i++){
//     cin>>v[i];
//     }
//     for(int i=0;i<=7;i++){
//     cout<<v[i]+1<<"   ";
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<6;i++){ //yaha ek variable declare ekarna hota hai 
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<6;i++){
    cout<<v[i]+1<<"   ";
}
}