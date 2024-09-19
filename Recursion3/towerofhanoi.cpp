#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){ // isme a ko source hai,b helper ,c destiantion 
    if(n==0) return;
    hanoi(n-1,a,c,b); // n-1  disk ko a se b tak punchna h c ki help se
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);// n-1 disk ko b,c tak pahuchana hai a ki help se 

}
int main(){
  int n=5;
  hanoi(n,'A','B','C');
}
