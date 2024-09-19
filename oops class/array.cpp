#include<iostream>
using namespace std;
int main(){
//     int arr[5]={10,20,30,40,50};
//     cout<<" the displaying the element"<<endl;
//     for(int i=0;i<5;i++){
//         cout<<" index "<<i<<" "<<arr[i]<<endl;
//     }
//     cout<<" after adding 10 "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<" index "<<i<<" "<<arr[i]+10<<endl;
//     }
int arr[5];
cout<<" enter the  5 number "<<endl;
for(int i=0;i<5;i++){
    cin>>arr[i]; // dynamic allocation in run time 
}
cout<<" Displaying the number you entered"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

}