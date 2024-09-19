 #include<iostream>
 #include<cmath>
using namespace  std;
int main(){
    // gp 1,2,4,8,....
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=pow(2,n-1);i*=2){
        cout<<i<<endl;
    }
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a*=2;
    // }
    // return 0;


}
