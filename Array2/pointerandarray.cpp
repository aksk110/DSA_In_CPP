#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,6};
    int* ptr=arr;  // it ptr have address of array first element 
  
   ptr++; //chnge the second value 
   *ptr=9;
   ptr--;
    for(int i=0;i<=6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}

 