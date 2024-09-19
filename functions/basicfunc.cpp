#include<iostream>
using namespace std;
void startriangle (int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main(){
int n;
cout<<"enter the number print";
cin>>n;
startriangle(n);
startriangle(5);
startriangle(6);


}