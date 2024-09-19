#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123458921641240214"; // as a string hai  ho gya apka 
    // int x=stoi(str); // as a number ho gya apka bhai 
    // cout<<x+4; //12349

    // stoll number bada ho long long hota hai 
    long long  x=stoll(str);
    cout<<x +1;
}