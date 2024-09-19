#include<iostream>
#include<vector>
using namespace std;
void change(int a[3][3]){ //isme esize deni padti apko 
    a[0][0]=3;
}
int main(){
    // int a[]={1,2,3};//pass by reference 
    // cout<<a[0]<<endl;
    // change(a);
    // cout<<a[0]<<endl;
    int arr[][3]={1,2,3,4,5,6,7,8,9,10};
    cout<<arr[0][0]<<endl; //isme apko size 
    change(arr);
    cout<<arr[0][0]<<endl;


}