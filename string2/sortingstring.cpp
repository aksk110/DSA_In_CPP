#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string s="aks kumar singh patel ";
    cout<<s;
    cout<<endl;
    sort(s.begin(),s.end()); // ascii value ke order me sorting hoti hai apki 
    cout<<s;

}