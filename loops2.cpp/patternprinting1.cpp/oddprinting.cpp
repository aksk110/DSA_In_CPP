// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j++){
//             if(j%2==0) continue;
//             else{
//                 cout<<j<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// next pattern

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=n;i++){
         for(int j=65;j<=n+64;j++){
            // typecasting 
            cout<<(char)(j)<<" ";
        }
        cout<<endl;
    }
}