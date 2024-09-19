#include<iostream>
using namespace std;
int factorial(int j){
    int fact=1;
    int i=1 ;
    while(i<=j){
        fact*=i;
        i++;
    
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int j=1;j<=n;j++){
        cout<<factorial(j)<<endl;
    }

}
// #include<iostream>
// using namespace std;

// int factorial(int j) {
//     int fact = 1;
//     int i = 1;
//     while (i <= j) {
//         fact *= i;
//         i++;
//     }
//     return fact; // Correctly returns the factorial after the loop
// }

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int j = 1; j <= n; j++) {
//         cout << factorial(j) << endl;
//     }
// }
