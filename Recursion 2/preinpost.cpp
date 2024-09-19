// #include<iostream>
// using namespace std;
// void Pip(int n){
//     if (n == 0) return;
//     cout<<"Pre "<<n<<endl;
//     Pip(n-1);
//     cout<<"In "<<n<<endl;
//     Pip(n-1);
//     cout<<"Post "<<n<<endl;
// }
// int main(){
//     Pip(2);
// }

//zig zag printing 
#include<iostream>
using namespace std;
void zigzag(int n){
    if (n == 0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main(){
    zigzag(1);
}