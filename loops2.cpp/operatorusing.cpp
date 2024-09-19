// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int count=0;
//     int a=n;
//     while(n>0) 
//     { n/=10;
//         count++;}
//     if(a==0)cout<<1;
//     else{
//         cout<<count;
//     }
// }


//wap to print sum of digits of a given number 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n,ld;
//     cout<<"enter the number ";
//     cin>>n;
//     int sum=0;
//     while(n>0){
//         ld=n%10;
//         sum=sum+ld;
//         n/=10;

//     }
//     cout<<"sum is"<<sum;
//     return 0;
//  }

//write a program to reverse a number  funny 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int x;
//     while(n>0){
//         x=n%10;
//         cout<<x;
//         n/=10;

//     }

// }


//write a program of alternate series 
//1-2+3-4=.......
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
//         else{
//             sum-=i;
//         }
//     }
//     cout<<"sum is "<<sum;
//     return 0;
// }


//wap to print the sum of all even digit of a given number 

// 


#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int x=0,temp=i;
        while(temp>0){
            int m=temp%10;
            x+=m*m*m;
            temp/=10;

        }
        if(i==x){
            cout<<i<<endl;
        }
    }
}