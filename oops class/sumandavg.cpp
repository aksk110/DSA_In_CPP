#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the size of an array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<" the sum is "<<sum<<endl;
    float avg=sum/n;
    cout<<"the average is "<<sum/n<<endl;
}